class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = nums[0];
        int left = 0;
        int right = nums.size();
        while(left<right){
            if(nums[left]<min) min = nums[left];
            left++;
        }
        return min;
    }
};