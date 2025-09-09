class Solution {
public:
    int subtractProductAndSum(int n) {
        int pdig = 1;
        int dsum = 0;
        int digit;
        while(n!=0){
            digit = n%10;
            pdig*=digit;
            dsum+=digit;
            n/=10;
        }
        return pdig - dsum;
    }
};