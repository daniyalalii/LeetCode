class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        vector<int> res;
        unordered_set<int> s;
        for(int num: nums){
            if(s.count(num)) continue;
            res.push_back(num);
            s.insert(num);
            if(res.size()==k) break;
        }
        return res;
    }
};