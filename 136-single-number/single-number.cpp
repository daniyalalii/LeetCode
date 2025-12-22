class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int ans = 0;
        // for(int value:nums){
        //     ans^=value;
        // }
        // return ans;
        unordered_map<int,int> freq;
        for(int i: nums) freq[i]++;
        for(auto&[key,value]: freq){
            if(value==1) return key;
        }
        return 0;
    }
};