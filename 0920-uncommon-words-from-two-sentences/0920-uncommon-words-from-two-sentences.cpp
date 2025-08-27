class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> um;
        stringstream ss1(s1);
        string word1;
        while (ss1 >> word1) {
            um[word1]++;   
        }
        stringstream ss2(s2);
        string word2;
        while (ss2 >> word2) {
            um[word2]++;  
        }
        vector<string> res;
        for (auto &p : um) {
            if (p.second == 1) {
                res.push_back(p.first);
            }
        }

        return res;
    }
};