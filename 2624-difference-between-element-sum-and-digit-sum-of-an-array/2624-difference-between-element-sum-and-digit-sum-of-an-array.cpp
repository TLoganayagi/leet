class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<10)
            {
                ans+=nums[i];
            }
            else if(nums[i]>=10)
            {
                string temp=to_string(nums[i]);
                for(int j=0;j<temp.size();j++)
                {
                    ans+=temp[j]-'0';
                }
            }
        }
        return abs(sum-ans);
    }
};