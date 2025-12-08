class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, leftPointer = 0, rightPointer = height.size() - 1;
        while(leftPointer < rightPointer){
            int width = rightPointer - leftPointer;
            int colHeight = min(height[leftPointer], height[rightPointer]);
            int area = width * colHeight;

            maxWater = max(area, maxWater);

            if(height[leftPointer] < height[rightPointer]){
                leftPointer++;
            }
            else{
                rightPointer--;
            }
        }

        return maxWater;
    }
};