class Solution {
    bool sorted(vector<string> s, int j){
        for(int i=1;i<s.size();i++){
            if(s[i][j]<s[i-1][j]) return true;
        }
        return false;
    }
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        for(int i=0;i<strs[0].size();i++){
            res+=sorted(strs,i);
        }
        return res;
    }
};