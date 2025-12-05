class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for(int i: nums) totalSum+=i;
        if(totalSum%2==1) return 0;
        return nums.size()-1;
    }
};