class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s)
        {
            mp[c]++;
        }
        vector<pair<char,int>> v(mp.begin(), mp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b)
        {
            return a.second>b.second;
        });
        string rev="";
        for(auto &c:v)
        {
            rev.append(c.second,c.first);
        }
        return rev;
    }
};