class Solution {
public:
    int countKeyChanges(string s) {
     int count = 0;
     for(char &c : s){ //address to change the character of string to lower
        c = tolower(c);
     }
     for(int i=1;i<s.size();i++){
        if(s[i-1]!=s[i]){
            count++;
        }
     }   
     return count;
    }
};