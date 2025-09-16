class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        int count = 0,i,j;
        for(i = 0; i < nums.size();i++){
            count = 0;
            for(j = 0; j < nums.size();j++){
                if(j != i && nums[j] < nums[i]){
                    count++;
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};