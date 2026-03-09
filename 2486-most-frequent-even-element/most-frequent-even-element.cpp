class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> freq;
        int res = -1;
        int max = 0;
        for(auto i: nums) {
            if(i%2==0) freq[i]++;
        }
        for(auto i: freq){
            if(i.second>max){
                res = i.first;
                max = i.second;
            }
        }
        return res;
        
    }
};