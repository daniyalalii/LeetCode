class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        int nums;
        for(int i=0;i<n;i++){
            nums= start + 2 * i;
            res^=nums;
        }
    return res;
    }
};