class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>mp1;
        for(int i=0;i<word1.size();i++)
        {
            mp1[word1[i] -'a']++;
            mp1[word2[i] -'a']--;
        }
        for(auto x:mp1)
        {
            if(abs(x.second)>=4)
                return false;
        }
        return true;
    }
};