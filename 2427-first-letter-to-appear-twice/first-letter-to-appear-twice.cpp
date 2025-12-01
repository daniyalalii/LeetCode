class Solution {
public:
    char repeatedCharacter(string s) {
        vector <int> freq(26,0); 
        char ans;
        for(int i = 0;i<s.size();i++){
            if(freq[s[i]-'a']==1){
                ans = s[i];
                break;
            }
            else{
                freq[s[i] - 'a']++;
            }
        }
        return ans;
    }
};