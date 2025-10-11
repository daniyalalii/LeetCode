class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int csum = 0;
        for (int i = 1; i<=nums.size();i++){
            sum+=i;
        }
        for(int i=0;i<nums.size();i++){
            csum+=nums[i];
        }
        return (sum - csum);
    }
};