class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi=0;
        unordered_map<int,int> mp1;
        for(int x:arr)
        {
            mp1[x]++;
        }
        for(auto &p:mp1)
        {
            if(p.first==p.second)
            {
                if(p.first>maxi)
                    maxi=p.first;
            }
        }
        if(maxi!=0)
            return maxi;
        return -1;
        
    }
};