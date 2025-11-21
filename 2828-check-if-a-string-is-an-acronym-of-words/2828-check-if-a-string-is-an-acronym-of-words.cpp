class Solution {
public:
    bool isAcronym(vector<string>& words, string s) 
    {
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            ans+=words[i][0];
            if(words[i][0]!=s[i])
                return false;
        }
        if(ans==s)
            return true;
        else
            return false;   
    }
};