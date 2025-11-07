class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int prev = 1, next = 0, curr;
        for(int i=2;i<=n;i++){
            curr = prev+next;
            next = prev;
            prev = curr;
        }
        return prev;
    }
};