class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> um1;
        unordered_map<string,char> um2;
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word)
        {
            words.push_back(word);
        }
        if(pattern.size()!=words.size())    return false;
        for(int i=0;i<pattern.size();i++)
        {
            char c=pattern[i];
            string s1=words[i];
            if(um1.count(c) && um1[c]!=s1)    return false;
            if(um2.count(s1) && um2[s1]!=c)     return false;
            um1[c]=s1;
            um2[s1]=c;
        }
        return true;
    }
};