class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i: nums){
            freq[i]++;
        }
        int count = 0;
        for(auto& [key,value]: freq){
            if(freq.count(key+1)){
                int l = value + freq[key+1];
                count = max(count,l);
            }
        }
        return count;
    }
};