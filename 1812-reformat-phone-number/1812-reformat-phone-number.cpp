class Solution {
public:
    string reformatNumber(string number) {
        string res="";
        for(int x: number)
        {
            if(isdigit(x))
            {
                res+=x;
            }
        }
        int j=0;
        int n=res.size();
        string res2="";
        while(j<n)
        {
            int rem = n - j;
            if(rem>4)
            {
                res2+=res.substr(j, 3) + "-";
                j+=3;
            }
            else if(rem==4)
            {
                res2+=res.substr(j, 2) + "-" + res.substr(j + 2, 2);
                j+=4;
            }
            else
            { 
                res2+= res.substr(j);
                j = n;
            }
        }
        return res2; 
    }
};