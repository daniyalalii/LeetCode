class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> freq;
        int sum = 0;
        for(int i : nums) freq[i]++;
        for(auto& [key,val]: freq){
            if(val>=2) continue;
            else sum+=key;
        }
        return sum;
    }
};