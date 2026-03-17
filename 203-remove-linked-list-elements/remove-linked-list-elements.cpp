/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node that points to the head.
        // This makes handling edge cases (like deleting the head) much easier.
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* curr = dummy;
        
        // Traverse the list
        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                // Node to be removed is found. 
                ListNode* toDelete = curr->next;
                
                // Bypass the target node
                curr->next = curr->next->next;
                
                // Free the memory (important in C++!)
                delete toDelete;
            } else {
                // Only move forward if we didn't delete a node
                curr = curr->next;
            }
        }
        
        // Store the new head before deleting the dummy node
        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
    }
};