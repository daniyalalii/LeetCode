class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
                int j = nums[i];
                int digit = 0;
                while(j){
                    digit++;
                    j/=10;
                }
                if(digit%2==0){
                    count++;
                }
        }
        return count;
    }
};