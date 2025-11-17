class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long n=nums.size(), ans=0,i=0,j=nums.size()-1;
        if(n==1)    return nums[0];
        while(i<j)
        {
            string s=to_string(nums[i]) + to_string(nums[j]);
            ans+=stoi(s);
            i++;
            j--;
        }
        if(i==j)    ans+=nums[i];
        return ans;
    }
};