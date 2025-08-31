class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            // building new vector from old vector, like nums[nums[i]] --> nums[2] --> and so on, 
            result.push_back(nums[nums[i]]);
        }
        return result;
    }
};