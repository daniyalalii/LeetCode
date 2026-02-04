class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int val = 0;
        // for(int i=0;i<jewels.size();i++){
        //     val += count(stones.begin(),stones.end(),jewels[i]);
        // }
        // return val;
        unordered_set<char> set(jewels.begin(),jewels.end());
        for(char s : stones){
            if(set.count(s)) val++;
        }
        return val;
    }
};