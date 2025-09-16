class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //  sort(nums.begin(),nums.end());
        //  int size = nums.size();
        //  return nums[size/2];
        int size = nums.size();
        unordered_map<int, int> freq;
        for (int val : nums) {
            freq[val]++;
            if (freq[val] > (size / 2)) {
                return val;
            }
        }
        return -1;
    }
};