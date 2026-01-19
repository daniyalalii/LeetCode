class Solution {
public:
    string reversePrefix(string word, char ch) {
        int start = 0;
        int end = word.length();
        while(start<end){
            if(word[start]==ch){
                reverse(word.begin(),word.begin()+start+1);
                break;
            }
            start++;

        }
        return word;
    }
};