class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniqueNo = 0;

        for(int values : nums){
            uniqueNo ^= values;
        }

        return uniqueNo;
    }
};