class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double res;
        int cursum = 0;
        for (int i = 0; i < k; i++) {
            cursum += nums[i];
        }
        int maxi = cursum;
        for (int i = k; i < n; i++) {
            cursum += nums[i] - nums[i - k];
            maxi = max(maxi, cursum);
        }
        res = (double)maxi / k;
        return res;        
    }
};
