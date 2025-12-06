class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedset(banned.begin(),banned.end());
        unordered_map<string,int> mp;
        string word="";
        for(char &c:paragraph)
        {
            if(isalpha(c))
            {
                word+=tolower(c);
            }
            else
            {
                if(!word.empty() && !bannedset.count(word))
                {
                    mp[word]++;
                }
                word="";
            }
        } 
        if(!word.empty() && !bannedset.count(word))
        {
            mp[word]++;
        }
        string ans="";
        int maxi=0;
        for(auto &p:mp)
        {
            if(p.second>maxi)
            {
                maxi=p.second;
                ans=p.first;
            }
        }
        return ans;
    }
};