class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> freq(n+1,0);
        for(int x:nums)
        {
            freq[x]++;
        }
        int res1=-1,res2=-1;
        for(int i=0;i<=n;i++)
        {
            if(freq[i]==2)  res1=i;
            if(freq[i]==0)  res2=i;
        }
        return {res1,res2};
    }
};