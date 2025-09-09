class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rsize = accounts.size();
        int csize = accounts[0].size();
        int maxSum = 0;
        for(int i=0;i<rsize;i++){
        int currentSum = 0;
            for(int j=0;j<csize;j++){
                currentSum += accounts[i][j];
            }
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
};