class Solution {
public:
    string modifyString(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                for(char ch='a';ch<='c';ch++)
                {
                    bool isvalid=true;
                    if(i>0 && s[i-1]==ch)   isvalid=false;
                    else if(i<s.size()-1 && s[i+1]==ch) isvalid=false;
                    if(isvalid)
                    {
                        s[i]=ch;
                        break;
                    }
                }
            }
        }
        return s;
    }
};