class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int size = nums.size();
        if(size%k!=0){
            return false;
        }
        sort(nums.begin(),nums.end());
        int count = 1;
        int maxfrequency = 1;
        for(int i=1;i<size;i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                maxfrequency = max(maxfrequency,count);
                count = 1;
            }
        }
            maxfrequency = max(maxfrequency,count);
            return (long long) maxfrequency*k<=size;
    }
};