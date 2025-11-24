class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n+1,0);
        for(int x:nums)
        {
            temp[x]++;
        }
        vector<int> res;
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i]==0)
                res.push_back(i);
        }
        return res;
    }
};