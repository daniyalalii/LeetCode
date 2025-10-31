class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> sneaky;
        unordered_map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }

        for(auto &[key,val]:freq){
            if(val>1) sneaky.push_back(key);
        }
        return sneaky;
    }
};