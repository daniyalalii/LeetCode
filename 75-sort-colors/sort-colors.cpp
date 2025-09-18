class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int val = 0; val < nums.size() - 1; val++) {
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] > nums[i + 1]) {
                    swap(nums[i], nums[i + 1]);
                }
            }
        }
    }
};