class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum = 0;
        int dsum = 0;
        for (int num : nums) {
            esum += num; 
            
            int n = num;
            while (n > 0) {  
                dsum += n % 10;
                n /= 10;
            }
        }
        
        return abs(esum - dsum);
    }
};