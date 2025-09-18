class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int near=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])-0 < abs(near))
            {
                near=nums[i];
            }
            else if(abs(nums[i])-0 == abs(near))
            {
                near=max(near,nums[i]);
            }
        }
        return near;
        
    }
};