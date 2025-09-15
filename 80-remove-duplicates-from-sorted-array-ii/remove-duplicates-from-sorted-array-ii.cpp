class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int count = 0;
        int previous = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != previous) {
                count = 0;
            } else {
                count++;
            }
            if (count <= 1) // <= 1 --> means element to be appear for two times only
                            // --> as count starts from 0
            {
                nums[index] = nums[i];
                index++;
                previous = nums[i];
            }
        }
        return index;
    }
};