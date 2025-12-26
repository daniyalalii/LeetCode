class Solution {
public:
    int bestClosingTime(string customers) {
        int time = 0;
        int penalty = 0;
        int sum = 0;
        for(int i=0;i<customers.length();i++){
            sum+= customers[i]=='Y'? -1:1;
            if(sum<penalty){
                time = i + 1;
                penalty = sum;
            }
        }
        return time;
    }
};