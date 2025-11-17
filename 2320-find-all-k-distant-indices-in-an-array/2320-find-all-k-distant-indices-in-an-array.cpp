class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==key)
            {
                for(int j=0;j<n;j++)
                {
                    if(abs(j-i)<=k)
                    {
                        res.push_back(j);
                    }
                }
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};