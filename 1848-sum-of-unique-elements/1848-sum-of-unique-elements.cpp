class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp1;
        //unordered_map<int,int> mp2;
        for(int x:nums)
        {
            mp1[x]++;
        }
        int sum=0;
        for(auto &p:mp1)
        {
            if(p.second==1)
                sum+=p.first;
        }
        return sum;
    }
};