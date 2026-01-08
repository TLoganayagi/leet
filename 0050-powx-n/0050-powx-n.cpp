class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;   // prevent overflow

        if (exp == 0)
            return 1.0;

        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }

        double half = myPow(x, exp / 2);

        if (exp % 2 == 0)
            return half * half;
        else
            return x * half * half;
    }
};
