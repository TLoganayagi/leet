class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        double res=1e18;;
        while(i<j)
        {
            double ans=(nums[i] + nums[j]) / 2.0;
            res=min(ans,res);
            i++;
            j--;
        }
        return res;
    }
};