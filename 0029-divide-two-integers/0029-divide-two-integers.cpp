class Solution {
public:
    int divide(int dividend, int divisor) {
        long long res;
        res=(long long)dividend/divisor;
        if (res<2147483648)
            return res;
        else 
            return 2147483647;
    }
};