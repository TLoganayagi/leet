class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> um1;
        unordered_map<string,int> um2;
        for(string s:words1)
        {
            um1[s]++;
        }
        for(string s:words2)
        {
            um2[s]++;
        }
        int res=0;
        for(auto &p:um1)
        {
            if(p.second==1 && um2[p.first]==1)
            {
                res++;
            }
        }
        return res;
        
    }
};