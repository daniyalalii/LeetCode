class Solution {
public:
    bool isIncreasing(vector<int>&nums, int start, int k){
        for(int i=start;i<start+k-1;i++){
            if(nums[i]>=nums[i+1]) return false;
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int size = nums.size();
        for(int a = 0;a+2*k<=size;a++){
            int b = a + k;
            if(isIncreasing(nums,a,k) && isIncreasing(nums,b,k)) return true;
        }
        return false;
    }
};