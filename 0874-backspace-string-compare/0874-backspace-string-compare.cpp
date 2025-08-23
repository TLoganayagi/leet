class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0,j=0;
        vector <char> st1;
        vector <char> st2;
        while(i<s.size())
        {
            if(s[i]=='#' && !st1.empty())
            {
                st1.pop_back();
            }
            else if(s[i]!='#')
            {
                st1.push_back(s[i]);
            }
            i++;
        }
        while(j<t.size())
        {
            if(t[j]=='#' && !st2.empty())
            {
                st2.pop_back();
            }
            else if(t[j]!='#')
            {
                st2.push_back(t[j]);
            }
            j++;
        }
        if(st1==st2)    return true;
        return false;
        
    }
};