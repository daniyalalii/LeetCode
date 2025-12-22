class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int length = 2*n;
        vector<int> res(length);
        int i = 0; int j = n;
        int index = 0;
        while(index<length){
            res[index++] = nums[i++];
            res[index++] = nums[j++];
        }
        return res;
    }
};