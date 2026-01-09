class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        int count = 0;
        vector<bool> prime(n,true);
        prime[0] = false; //0;
        prime[1] = false; //1
        for(int i=0;i<n;i++){
            if(prime[i]){
                count++;
                int k = 2;
                int j = i*k;
                while(j<n){
                    prime[j] = false;
                    j = j+i;
                }
            }
        }
        return count;
    }
};