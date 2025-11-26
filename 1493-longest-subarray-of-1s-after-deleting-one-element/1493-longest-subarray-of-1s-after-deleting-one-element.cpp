class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int prev=0;
        int cur=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                prev++;
            }
            else
            {
                cur=prev;
                prev=0;
            }
            maxi=max(maxi,cur+prev);
        }
        if(count(nums.begin(),nums.end(),0)==0)
        {
            return maxi-1;
        }
        else
        {
            return maxi;
        }    
    }
};