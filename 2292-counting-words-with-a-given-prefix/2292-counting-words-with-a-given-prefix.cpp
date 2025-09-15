class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int count=0;
        for (string &s : words) 
        {
            if (s.size() < n) continue;
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=pref[i])
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