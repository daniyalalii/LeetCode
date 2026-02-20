class Solution {
public:
    int maxDepth(string s) {
        int count = 0, maxSum = 0;
        for(char c : s){
            if(c=='('){
                count++;
                maxSum = max(maxSum,count);
            }else if(c==')'){
                count--;
            }
        }
        return maxSum;
    }
};