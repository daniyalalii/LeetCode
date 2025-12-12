class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        int total = m + n;
        int half = (total + 1) / 2;

        while (low <= high) {

            int cutA = (low + high) / 2;
            int cutB = half - cutA;

            int leftA_max  = (cutA == 0 ? INT_MIN : nums1[cutA - 1]);
            int rightA_min = (cutA == m ? INT_MAX : nums1[cutA]);

            int leftB_max  = (cutB == 0 ? INT_MIN : nums2[cutB - 1]);
            int rightB_min = (cutB == n ? INT_MAX : nums2[cutB]);

            if (leftA_max <= rightB_min && leftB_max <= rightA_min) {

                if (total % 2 == 1)
                    return max(leftA_max, leftB_max);

                int leftMax = max(leftA_max, leftB_max);
                int rightMin = min(rightA_min, rightB_min);
                return (leftMax + rightMin) / 2.0;
            }

            else if (leftA_max > rightB_min) {
                high = cutA - 1;
            }

            else {
                low = cutA + 1;
            }
        }
        return 0.0;
    }
};
