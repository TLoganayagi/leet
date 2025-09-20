class Solution {
public:
    int findComplement(int num) {
        if(num==0)  return 1;
        int temp=num;
        int bit=0;
        while(temp>0)
        {
            bit=(bit<<1)|1;
            temp>>=1;
        }
        return num^bit;
    }
};