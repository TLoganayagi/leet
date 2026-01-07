class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for(int x:nums)
        {
            mp[x]++;
            if(mp[x]==2)
            {
                arr.push_back(x);
            }
        }
        return arr;
    }
};