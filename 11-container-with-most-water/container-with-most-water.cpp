class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0, right = height.size()-1;
        while(left<right){
            int w = right - left;
            int h = min(height[left],height[right]);
            int currentWater = w*h;
            maxWater = max(maxWater,currentWater);
           height[left]<height[right]?left++:right--;
        }
        return maxWater;
    }
};