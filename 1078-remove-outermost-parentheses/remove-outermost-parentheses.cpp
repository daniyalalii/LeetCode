class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int val =0;
        for(int i=0; i<s.size();i++){
            if(s[i] == '('){
                if(val>0) res += s[i];
                val++;
            }
            else{
                val--;
                if(val>0) res += s[i];
            }
        }
        return res;
    }
};