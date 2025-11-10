class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        if(nums==arr)
            return true;
        bool flag=false;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if (nums[i] > nums[(i + 1) % n]) 
            {
                if(flag==false)
                    flag=true;
                else
                    return false;
            }
        }
        return true;
    }
};