class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int x:nums)
        {
            mp[x]++;
        }
        for(auto &p:mp)
        {
            if(p.second==1)
            {
                res.push_back(p.first);
            }
        }
        return res;
    }
};