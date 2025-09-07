class Solution {
public:
    int minInsertions(string s) {
        int size = s.size();
        vector<vector<int>> dp(size, vector<int>(size, 0));

        for (int len = 2; len <= size; len++) {
            for (int i = 0; i + len - 1 < size; i++) {
                int j = i + len - 1;
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1];
                } else {
                    dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[0][size - 1];
    }
};