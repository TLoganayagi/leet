class Solution {
public:
    double myPow(double x, int n) {
        long long exp=n;
        if(exp==0)
            return 1.0;
        if(exp==1)
            return x;
        if(exp<0)
        {
            x=1/x;
            exp=-exp;
        }
        if(exp%2==0)
            return myPow(x*x,exp/2);
        else
            return x*myPow(x,exp-1);
    }
};