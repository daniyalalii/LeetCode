class Solution {
public:
    int gcd(int a, int b){
        if(a==0){
            return b;
        }
        return gcd(b%a,a);
    }
    long long lcm(long long a, long long b){
        return (a*b)/gcd(a,b);
    }
    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(k%nums[i]!= 0) continue;
            long long currentLcm = 1;
            for(int j=i;j<nums.size();j++){
                if(k%nums[j]!=0) break;
                currentLcm = lcm(currentLcm,nums[j]);
                if(currentLcm==k) count++;
                if(currentLcm>k) break;
            }
        }
        return count;
    }
};