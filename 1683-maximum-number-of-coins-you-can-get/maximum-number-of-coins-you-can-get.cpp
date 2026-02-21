class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int r = n;
        int count = 0;
        for(int i=0;i<n/3;i++){
            count+=piles[r-2];
            r-=2;
        }
        return count;
    }
};