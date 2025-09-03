class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case: overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // 2147483647
        }
        
        long long res = (long long)dividend / divisor; // safe division

        // Clamp result to 32-bit integer range
        if (res > INT_MAX) return INT_MAX;
        if (res < INT_MIN) return INT_MIN;

        return (int)res;
    }
};
