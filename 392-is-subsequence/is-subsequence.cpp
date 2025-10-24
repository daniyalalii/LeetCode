class Solution {
public:
    bool isSubsequence(string s, string t) {
        int freq1 = 0;
        int freq2 = 0;
        while(freq1<s.length() && freq2 < t.length()){
            if(s[freq1]==t[freq2]) freq1++;
            freq2++;
        }
        return freq1==s.length();
    }
};