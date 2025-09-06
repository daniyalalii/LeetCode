class Solution {
public:
    int countDigits(int num) {
        int nums = num;
        int digits = 0;
        while (nums) {
            int digit = nums % 10;
            if (digit != 0 && num % digit == 0) {
                digits++;
            }
            nums = nums / 10;
        }

        return digits;
    }
};