class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,vector<int>> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].push_back(i);
        }
        int res=0;
        for(auto &p:mp)
        {
            const vector<int> &i=p.second;
            int start= i[0];
            int end=i[i.size()-1];
            if(end-start<=1)
                continue;
            unordered_set<char> temp;
            for(int j= start+1;j<end;j++)
            {
                temp.insert(s[j]);
            }
            res+=temp.size();
        }
        return res;
    }
};