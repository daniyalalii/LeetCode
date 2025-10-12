class Solution {
public:
    char findTheDifference(string s, string t) {
        // int num = 0;
        // for(char val:s) num^=val;
        // for(char val:t) num^=val;
        // return num;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.size();i++){
            if(s[i]==t[i]) continue;
            else{
                return t[i];
            }
        }
        return ' ';
    }
};