class Solution {
public:
struct compute{
    bool operator()(string &a, string &b){
        if(a.length()==b.length()) return a>b;
        return a.length()>b.length();
    } 
};
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, compute> pq;
        for(auto &i: nums){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};