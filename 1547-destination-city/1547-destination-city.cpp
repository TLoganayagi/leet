class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> res;
        for(const auto& path:paths)
        {
            res.insert(path[0]);
        }  
        for(const auto& path:paths)
        {
            if(res.find(path[1])==res.end())
            {
                return path[1];
            }
        }
        return "";
    }
};