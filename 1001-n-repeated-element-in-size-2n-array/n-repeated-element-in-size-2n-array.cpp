class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto &[key,val]:freq){
            if(val>=n/2) return key;
        }
        return 0;
    }
};