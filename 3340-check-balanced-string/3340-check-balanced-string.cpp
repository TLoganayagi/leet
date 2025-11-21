class Solution {
public:
    bool isBalanced(string num) {
        int res1=0,res2=0;
        for(int i=0;i<num.size();i+=2)
        {
            res1+=num[i]-'0';
        }
        for(int i=1;i<num.size();i+=2)
        {
            res2+=num[i]-'0';
        }
        return res1==res2;
    }
};