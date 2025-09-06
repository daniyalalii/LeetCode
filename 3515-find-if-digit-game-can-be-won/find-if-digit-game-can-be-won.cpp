class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int size = nums.size();
        int max = 0;
        int maxtwo = 0;
        for (int i = 0; i < size; i++) {
            if (nums[i] >= 0 && nums[i] <= 9) {
                max += nums[i];
            }
            if (nums[i] > 9) {
                maxtwo += nums[i];
            }
        }

        if (max > maxtwo) {
            return true;
        } else if (maxtwo > max) {
            return true;
        }
        return false;
    }
};