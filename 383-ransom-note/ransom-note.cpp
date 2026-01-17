class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> count;
        for(char i:magazine){
            count[i]++;
        }
        for(char i: ransomNote){
            if(count[i]<=0) return false;
            count[i]--;
        }
        return true;
    }
};