class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxi1=nums[n-1];
        int maxi2=nums[n-2];
        int mini1=nums[0];
        int mini2=nums[1];
        int res=(maxi1*maxi2) - (mini1*mini2);
        return res;
    }
};