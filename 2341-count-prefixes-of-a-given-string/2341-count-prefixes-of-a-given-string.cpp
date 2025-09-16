class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count =0;
        for(string x:words)
        {
            bool flag=true;
            for(int i=0;i<x.size();i++)
            {
                if(x[i]!=s[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
                count++;
        }
        return count;
        
    }
};