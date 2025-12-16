class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        if(s.size()<=2) return s;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(res.length()>=2 && res[res.length()-1]==c && res[res.length()-2]==c) continue;
            res+=c;
        }
        return res;
    }
};