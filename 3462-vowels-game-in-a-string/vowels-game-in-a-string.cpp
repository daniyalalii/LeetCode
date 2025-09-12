class Solution {
public:
    bool doesAliceWin(string s) {
        // for(auto i : s){
        //     if(i =='a' || i=='e' || i == 'o' || i == 'i' || i == 'u'){
        //         return true;
        //     }
        // }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u') {
                return true;
            }
        }
        return false;
    }
};