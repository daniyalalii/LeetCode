class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101] = {0};
        vector<int> res(nums.size(),0);
        for(int i:nums){
            freq[i]++;
        }
        for(int val = 1;val<101;val++){
            freq[val]+=freq[val-1];
        }
        for(auto i = 0;i<nums.size();i++){
            int c = nums[i];
                if(c==0) res[i]=0;
                else{
                    res[i] = freq[c-1];
                }
            }
            return res;
        
    }
};