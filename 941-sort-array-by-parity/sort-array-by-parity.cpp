class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if (nums.size() == 1) return nums;

        vector<int> res(nums.size());
        int i = 0;
        int j = nums.size() - 1;

        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] % 2 == 0) {
                res[i] = nums[index];
                i++;
            } else {
                res[j] = nums[index];
                j--;
            }
        }

        return res;
    }
};
