class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            freq[x]++;
        }
        int maxi=nums[0];
        int count=0;
        for(auto &p : freq)
        {
            if(p.second>count)
            {
                count=p.second;
                maxi=p.first;
            }
        }
        return maxi;
    }
};