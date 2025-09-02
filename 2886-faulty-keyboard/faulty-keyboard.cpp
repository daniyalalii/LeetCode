class Solution {
public:
    string finalString(string s) {
        string result = "";
        int size = s.size();
        for(int i=0;i<size;i++){
            if(s[i]=='i'){
                reverse(result.begin(),result.end());
            }
            else{
                result += s[i];
            }
        }
        return result;
    }
};