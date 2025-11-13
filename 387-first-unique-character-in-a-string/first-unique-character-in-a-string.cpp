class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> str(26,0);
        for(int i=0;i<s.size();i++){
            str[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(str[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};