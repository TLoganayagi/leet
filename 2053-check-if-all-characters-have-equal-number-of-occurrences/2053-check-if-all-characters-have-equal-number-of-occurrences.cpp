class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>freq;
        for(char x: s)
        {
            freq[x]++;
        }
        int temp= freq.begin()->second;
        for(auto &p:freq)
        {
            if(p.second!=temp)
                return false;
        }
        return true;
    }
};