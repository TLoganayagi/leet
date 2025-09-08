class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> arr(n,-1);
        for(auto i:nums){
            arr[i-1]=i;
        }
        for(int j=0;j<arr.size();j++){
            if(arr[j]==-1) ans.push_back(j+1);
        }
    return ans;
    }
};