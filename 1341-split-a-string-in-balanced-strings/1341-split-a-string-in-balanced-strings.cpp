class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0, r=0, i=0;
        int res=0;
        int n=s.size();
        while(i<n)
        {
            if(s[i]=='L')   l++;
            else if(s[i]=='R')   r++;
            if(l==r)
            {
                res++; 
            }
            i++;    
        }
        return res;
        
    }
};