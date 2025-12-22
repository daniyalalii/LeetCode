class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int csum = 0;
        int sum = n*(n+1)/2;
        int duplicate = -1;
        unordered_map<int,int>freq;
        for(int i:nums) {
            csum+=i;
            freq[i]++;
            if(freq[i]==2){
                duplicate = i;
            }
        }
    int missing = sum - (csum-duplicate);
        return {duplicate,missing};
    }
};