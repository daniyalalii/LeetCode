class Solution {
public:
    bool hasSameDigits(string s) {
        for(int i = s.size();i>2;i--){
            for(int j = 0;j<i-1;j++){
                s[j] = ((s[j]+ s[j+1] - '0') %10) + '0';
            }
        }
    return s[0] == s[1];
    }
};