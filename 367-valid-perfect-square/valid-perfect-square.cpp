class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) return true;
        int low = 1, high = num;
        bool ans = true;
        while (low <= high){
            int mid = low + (high - low) / 2;
            if(mid==num/mid && num%mid==0) return true;
            if (mid<num/mid) {
                ans = false;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};