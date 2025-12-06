class Solution {
public:
    /*void to_upper(string &s)
    {
        for(char &c:s)
        {
            c=toupper(c);
        }
    }*/
    string licenseKeyFormatting(string s, int k) {
        string temp="";
        for(char c:s)
        {
            if(c!='-')
                temp+=toupper(c);
        }
        //to_upper(temp);
        int n=temp.size();
        if(n==0)    return"";
        int y=n%k;
        //int x=n/k;
        string res="";
        
        int i=0;
        if(y!=0)
        {
            res+=temp.substr(0,y);
            res+='-';
            i=y;
        }

        while(i<n)
        {
            res+=temp.substr(i,k);
            //res+='-';
            i+=k;
            if(i<n) res+='-';
        }
        if(res.back() == '-')
            res.pop_back();
        return res;
    }
};