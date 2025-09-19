class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string &x:emails)
        {
            string res;
            for(char s:x)
            {
                if(s=='.')
                    continue;
                else if(s=='+' || s=='@')
                    break;
                res+=s;
            }
            res+=x.substr(x.find('@'));
            st.insert(res);
        }
        return st.size();
    }
};