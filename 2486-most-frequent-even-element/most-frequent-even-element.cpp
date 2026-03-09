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
            int num = i.first;
            int count = i.second;
            if(count>max){
                res = num;
                max = count;
            }
        }
        return res;
        
    }
};