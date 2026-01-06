class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> count;
        count[0]=1;
        int cursum=0;
        int tot=0;
        for(int x:nums)
        {
            cursum+=x;
            if(count.find(cursum-goal)!=count.end())
            {
                tot+=count[cursum-goal];
            }
            count[cursum]++;
        }
        return tot;
    }
};