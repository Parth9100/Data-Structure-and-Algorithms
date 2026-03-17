#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // Map to store the number and its most recent index: {number: index}
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            // If we've seen this number before...
            if (numMap.count(nums[i])) {
                // Check if the distance between the current index and the last seen index is <= k
                if (i - numMap[nums[i]] <= k) {
                    return true;
                }
            }
            // Update the map with the current number's most recent index
            numMap[nums[i]] = i;
        }
        
        return false;
    }
};