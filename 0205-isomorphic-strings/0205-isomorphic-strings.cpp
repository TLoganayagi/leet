class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>um1;
        unordered_map<char,char>um2;
        for(int i=0;i<s.size();i++)
        {
            char c1=s[i];
            char c2=t[i];
            if(um1.count(c1) && um1[c1]!=c2)    return false;
            if(um2.count(c2) && um2[c2]!=c1)    return false;
            um1[c1]=c2;
            um2[c2]=c1;
        }
        return true;
    }
};