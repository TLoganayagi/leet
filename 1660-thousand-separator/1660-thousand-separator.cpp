class Solution {
public:
    string thousandSeparator(int n) {
        string r= to_string(n);
        int num=r.size();
        int count=0;
        string res;
        for(int i=num-1;i>=0;i--)
        {
            count++;
            res+=r[i];
            if(count==3 && i!=0)
            {
                res+='.';
                count=0;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};