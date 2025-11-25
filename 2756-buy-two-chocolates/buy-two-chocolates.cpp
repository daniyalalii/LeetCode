class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());

        int choco = prices[0] + prices[1];
        if(choco<=money) money-=choco;
        return money;
    }
};