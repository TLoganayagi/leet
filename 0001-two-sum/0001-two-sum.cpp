class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        //vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int temp=target-nums[i];
            if(mp.count(temp))
            {
                return {mp[temp],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};