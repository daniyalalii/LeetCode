class Solution {
public:
    string largestEven(string s) {
        int index = -1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='2') {
                index = i;
                break;
            }
        }
        return index==-1?"":s.substr(0,index+1);
    }
};