class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int tot=0;
        for(int i=0;i<n;i++)
        {
            int st=max(0,i-nums[i]);
            for(int j=st;j<=i;j++)
            {
                tot+=nums[j];
            }
        }
        return tot;

    }
};