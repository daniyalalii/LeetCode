class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int x = abs(nums[i]);
            int index = x-1;
            if(nums[index]>=0){
                nums[index]=-nums[index];
                // cout<<nums[index];
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};