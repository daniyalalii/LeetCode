class Solution {
public:
    int maxDistinct(string s) {
        int freq[26] = {0}, count = 0;
        for(char c : s) freq[c-'a']++;
        for(int i=0;i<26;i++){
            if(freq[i]!=0) count++;
        }
        return count;
    }
};