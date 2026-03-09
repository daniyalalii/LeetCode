class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        for(int i: nums){
            freq[i]++;
        }
        for(auto i: freq){
            pq.push({i.second, i.first});
        }
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};