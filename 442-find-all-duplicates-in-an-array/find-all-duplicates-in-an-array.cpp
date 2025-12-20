class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums) freq[i]++;
        vector<int> res;
        for(auto &[key,value]: freq){
            if(value>=2) res.push_back(key);
        }
        return res;
    }
};