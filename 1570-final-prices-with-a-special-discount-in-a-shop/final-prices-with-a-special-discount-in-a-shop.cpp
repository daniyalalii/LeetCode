class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res(prices.size(), 0);
        stack<int> st;
        for (int i = 0; i < prices.size(); i++) {
            while (!st.empty() && prices[i] <= prices[st.top()]) {
                int index = st.top();
                st.pop();
                res[index] = prices[index] - prices[i];
            }
            st.push(i);
        }
        while (!st.empty()) {
            int index = st.top();
            st.pop();
            res[index] = prices[index];
        }
        return res;
    }
};