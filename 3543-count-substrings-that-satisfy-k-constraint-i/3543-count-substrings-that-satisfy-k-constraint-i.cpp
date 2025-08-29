class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
           int co=0,cl=0;
           for(int j=i;j<n;j++)
           {
                if(s[j]=='0')   co++;
                else    cl++;   
                if(co<=k || cl<=k)   res++;
           }
        }
        return res;
    }
};