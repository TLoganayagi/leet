class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0)   return 1;
        int bit=0;
        int temp=n;
        while(temp>0)
        {
            bit=(bit<<1)|1;
            temp>>=1;
        }
        return n^bit;
    }
};