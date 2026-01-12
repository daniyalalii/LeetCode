class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        double minSum = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            int sum = nums[i]+nums[n-1-i];
            if(sum<minSum) minSum = sum;
        }
        return minSum/2;
    }
};