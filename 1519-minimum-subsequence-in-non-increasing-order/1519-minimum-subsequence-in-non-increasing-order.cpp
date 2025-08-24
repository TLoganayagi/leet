class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum;
        vector<int> res;
        sum= accumulate(nums.begin(),nums.end(),0);
        int sub_sum=0;
        int rem_sum=sum;
        for(int i=nums.size()-1;i>=0;i--)
        {
            res.push_back(nums[i]);
            sub_sum+=nums[i];
            rem_sum-=nums[i];
            if(sub_sum>rem_sum)
            {
                break;
            }
        }
        return res;
    }
};