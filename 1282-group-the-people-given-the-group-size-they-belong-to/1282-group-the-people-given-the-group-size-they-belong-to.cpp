class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> res;
        unordered_map<int,vector<int>> mp;
        /*for(int x:groupSizes)
        {
            mp[x]++;
        }
        sort(mp.begin(),mp.end());
        vector<int>temp;
        */
        for(int i=0;i<groupSizes.size();++i)
        {   
            int x=groupSizes[i];
            mp[x].push_back(i);
            if(mp[x].size()==x)
            {
                res.push_back(mp[x]);
                mp[x].clear();
            }
        }
        return res;
    }
};