class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<int> frequency(26,0);
       for(int i=0;i<sentence.size();i++){
        frequency[sentence[i]-'a']++;
       }
       for(int i=0;i<26;i++){
        if(frequency[i]==0){
            return false;
        }
       }
       return true;
    }
};