class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        bool type = true;
        unordered_set<char> broken (brokenLetters.begin(),brokenLetters.end());
        for(int i=0;i<=text.size();i++){
            if(i == text.size() || text[i] == ' '){
                if(type) count++;
                type = true;
            }
            else{
                if(broken.count(text[i])){
                    type = false;
                }
            }
        }
        return count;
    }
};