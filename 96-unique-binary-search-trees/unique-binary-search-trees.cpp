class Solution {
public:
    int numTrees(int n) {
        vector<int> res(n + 1, 0);
        res[0] = 1;
        res[1] = 1;

        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                int left = j - 1;
                int right = i - j;
                res[i] += res[left] * res[right];
            }
        }
        return res[n];
    }
};