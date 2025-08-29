class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        vector<string>res;
        for(int x:nums)
        {
            res.push_back(to_string(x));
        }
        for(int i=0;i<res.size();i++)
        {
            if(res[i].size()%2==0)
            {
                count++;
            }
        }
        return count; 
    }
};