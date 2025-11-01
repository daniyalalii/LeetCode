class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        int maxp = nums[0];
        int minp = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0) swap(maxp,minp);
            maxp = max(nums[i], maxp *nums[i]);
            minp = min(nums[i], minp * nums[i]);

            res = max(res, maxp);
        }
        return res;
    }
};