class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int res = 0; 
        for (int i=0;i<nums.size();i++){
            res += nums[i]-min;
        }
        return res;
    }
};