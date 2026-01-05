class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int x:nums)
        {
            a^=(x & ~b);
            b^=(x & ~a);
        }
        return a;
    }
};