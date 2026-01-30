class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> look(friends.begin(),friends.end());
        vector<int> res;
        for( int i : order){
            if(look.count(i)) res.push_back(i);
        }
        return res;
    }
};