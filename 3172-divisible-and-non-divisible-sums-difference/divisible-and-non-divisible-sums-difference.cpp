class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divisbleSum = 0;
        int nondivisbleSum = 0;
        for(int i=1;i<=n;i++){
            if(i%m==0){
                divisbleSum+=i;
            }
            if(i%m!=0){
                nondivisbleSum+=i;
            }
        }
        return nondivisbleSum-divisbleSum;
    }
};