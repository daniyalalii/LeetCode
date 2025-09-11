class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0;
        int down = 0;
        int right = 0;
        int left = 0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') up++;
            else if(moves[i]=='D') down++;
            else if(moves[i]=='R') right++;
            else left++;
        }
        if(up==down && left==right) return true;
        return false;
    }
};