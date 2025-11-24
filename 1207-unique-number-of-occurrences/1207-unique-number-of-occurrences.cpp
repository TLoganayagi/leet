class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x:arr)
        {
            mp[x]++;
        }
        unordered_set<int> occ; 
        for(auto &p : mp) {
            if(occ.count(p.second)) 
                return false;
            occ.insert(p.second);
        }
        return true;
    }
};