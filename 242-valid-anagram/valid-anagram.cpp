class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;

        // unordered_map<char,int> countS;
        // unordered_map<char,int> countT;
        // for(int i=0;i<s.length();i++){
        //     countS[s[i]]++;
        //     countT[t[i]]++;
        // }
        // return countS==countT;
                sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.size();i++){
            if(s[i]==t[i]) continue;
            else{
                return false;
            }
        }
        return true;
    }
};