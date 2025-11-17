class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double> res;
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            res.push_back((nums[i] + nums[j]) / 2.0);
            i++;     
            j--;      
        }
        sort(res.begin(), res.end());
        auto it = unique(res.begin(), res.end());
        return it - res.begin();
    }
};
