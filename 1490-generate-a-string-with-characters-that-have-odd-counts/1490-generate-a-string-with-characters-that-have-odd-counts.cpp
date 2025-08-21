class Solution {
public:
    string generateTheString(int n) {
        string res="";
        int i=1;
        if(n==0)    return res;
        if(n%2!=0)
        {
            while(i<=n)
            {
                res+='a';
                i++;
            }
            
        }
        else if(n%2==0)
        {
            while(i<n)
            {
                res+='a';
                i++;
            }
            res+='b';
        }
        return res;
        
    }
};