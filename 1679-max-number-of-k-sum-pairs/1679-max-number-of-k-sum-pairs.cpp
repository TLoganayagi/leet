class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            int temp=k-x;
            if(freq[temp]>0)
            {
                count++;
                freq[temp]--;
            }
            else
            {
                freq[x]++;
            }
        }
        return count;
    }
};