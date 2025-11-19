class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        //unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]-nums[i]==k)
                    ans++;
            }
        }
        return ans;
    }
};