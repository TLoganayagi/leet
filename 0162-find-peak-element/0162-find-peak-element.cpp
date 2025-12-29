class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        if(n==1)    return res;
        if(nums[0]>nums[1])
            return res;
        else if(nums[n-1]>nums[n-2])
        {
            res=n-1;
            return res;
        }
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
        }
        return res;
    }
};