class Solution {
public:
    int arrangeCoins(int n) {
        //return floor(-0.5+sqrt((double)2*n+0.25));
        return (int)floor((sqrt(8l*n + 1) + 1)/2) - 1;
    }
};