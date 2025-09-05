class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //if(nums.size==1)    return nums[0];
        unordered_map<int,int> freq;
        for(int w: nums)
        {
            freq[w]++;
        }
        for(auto &p:freq)
        {
            if(p.second==1) 
                return p.first;
        }
        return -1;
    }
};