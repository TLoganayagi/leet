class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        res.insert(res.end(),2,-1);
        return res;
    }
};