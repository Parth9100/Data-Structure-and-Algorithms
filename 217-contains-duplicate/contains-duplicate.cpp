#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums) {
            // If the number is already in our set, we found a duplicate!
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Otherwise, add it to the set and keep checking
            seen.insert(num);
        }
        
        // If we make it through the whole array, everything is unique
        return false;
    }
};