class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>> mp;
        for(auto &p:pieces)
        {
            mp[p[0]]=p;
        }
        int i=0;
        while(i<arr.size())
        {
            if (mp.find(arr[i]) == mp.end())
                return false;
            vector<int> &piece = mp[arr[i]];
            for (int val : piece) 
            {
                if (i>=arr.size() || arr[i]!=val)
                    return false;  
                i++; 
            }
        }
        return true; 
        
    }
};