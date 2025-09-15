class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string ,int> map1;
        int ans=0;
        for(string s : words1)
        {
            if(map1.find(s)!= map1.end())
            {
                map1[s]++;
                continue;
            }
        
            map1[s]=0;
        }
        for(auto it = map1.begin();it!=map1.end();   )
        {
            if(it->second!=0)
            {
                it = map1.erase(it);
            }
            else
                it++;
        }
        for(string s : words2)
        {
            if(map1.find(s)== map1.end())
            {
                continue;
            }
            map1[s]++;
        }
        for(const auto& [key,value] : map1)
        {
            if(value == 1)
            {
                ans++;
            }
        }
        return ans;
    }
};