class Solution {
public:
    bool isPalindrome(string& s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        // if(s.length()==0 || s.length()==1 || s.length()== 2) return false;
        int l = 0; int r = s.size()-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                 return isPalindrome(s,l+1,r) || isPalindrome(s,l,r-1);
            }
        }
        return true;
    }
};