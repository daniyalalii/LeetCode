class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        int count = 0;
        for(char c: s){
            freq[c]++;
            if(freq[c]%2==1) count++;
            else count--;
        }
        if(count>1) return s.length()-count+1;
        return s.length();
    }
};