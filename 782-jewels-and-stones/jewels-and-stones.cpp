class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int val = 0;
        for(int i=0;i<jewels.size();i++){
            val += count(stones.begin(),stones.end(),jewels[i]);
        }
        return val;
    }
};