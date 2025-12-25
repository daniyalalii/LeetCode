class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        int time = 0;
        long long ans = 0;
        while (time < k) {
            ans += max(happiness[time] - time, 0);
            time++;
        }
        return ans;
    }
};