/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* nextTemp = NULL;
    
    while (curr != NULL) {
        // 1. Store the next node so we don't lose track of the rest of the list
        nextTemp = curr->next;
        
        // 2. Reverse the pointer of the current node to point backwards
        curr->next = prev;
        
        // 3. Move 'prev' and 'curr' one step forward for the next iteration
        prev = curr;
        curr = nextTemp;
    }
    
    // Once 'curr' reaches NULL, 'prev' is pointing to the new head of the list
    return prev;
}