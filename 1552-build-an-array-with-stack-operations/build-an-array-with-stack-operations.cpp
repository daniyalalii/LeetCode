class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int index = 0;
        vector<string> res;
        for(int i=1; i<=n && index<target.size(); i++){
            res.push_back("Push");
            if(target[index]!=i) res.push_back("Pop");
            else index++;
        }
        return res;
    }
};