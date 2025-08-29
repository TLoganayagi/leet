class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        //sort(arr1.begin(),arr1.end());
        unordered_map<int,int> um1;
        for(int x:arr1)
        {
            um1[x]++;
        }     
        vector<int> res;
        for(int x: arr2)
        {
            while(um1[x]>0)
            {
                res.push_back(x);
                um1[x]--;
            }
        }
        vector<int>res2;
        for(auto &p:um1)
        {
            while(p.second>0)
            {
                res2.push_back(p.first);
                p.second--;
            }
        }
        sort(res2.begin(),res2.end());
        res.insert(res.end(),res2.begin(),res2.end());
        return res;
    }
};