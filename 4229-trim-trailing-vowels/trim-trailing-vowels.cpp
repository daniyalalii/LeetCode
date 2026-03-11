class Solution {
public:
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c== 'o' || c== 'u');
    }
    string trimTrailingVowels(string s) {
        int i = s.size()-1;
        while(i>=0 && isVowel(s[i])) i--;
        return i<0? "": s.substr(0,i+1);
    }
};