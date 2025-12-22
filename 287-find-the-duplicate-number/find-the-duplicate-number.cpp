class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i : nums) freq[i]++;
        for(auto&[key,value]: freq){
            if(value>=2) return key;
        } 
        return 0;
    }
};