class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        unordered_map<char,int> mp;
        for(char c:s)
        {
            mp[c]++;
        }
        int count=0;
        bool flag=false;
        bool flag2=false;
        for(auto &p:mp)
        {
            if(p.second %2==0)
            {
                count+=p.second;
            }
            else if(p.second>2 && p.second %2 !=0)
            {
                if(flag==false)
                {
                    count+=p.second;
                    flag=true;
                }
                else
                {
                    count+=p.second-1;
                }
            }
            else if(p.second<2)
            {
                flag2=true;
            }
        }
        if(flag==false && flag2==true)
        {
            count++;
        }
        return count;   
    }
};