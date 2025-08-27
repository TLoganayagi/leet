class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> um1;
        if(s.empty())   return 0;
        for(char c:s)
        {
            um1[c]++;
        }
        int res=0;
        bool one=false;
        for(auto &p:um1)
        {
            if((p.second) % 2 ==0)
            {
                res+=p.second;
            }
            else
            {
                res+=p.second-1;
                one=true;
            }
        }
        if (one)    res+=1;
        return res;
        
    }
};