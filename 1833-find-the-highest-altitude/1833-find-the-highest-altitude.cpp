class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> arr;
        arr.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            int ans=arr[i]+gain[i];
            arr.push_back(ans);
        }
        int maxval= *max_element(arr.begin(), arr.end());
        return maxval;
    }
};