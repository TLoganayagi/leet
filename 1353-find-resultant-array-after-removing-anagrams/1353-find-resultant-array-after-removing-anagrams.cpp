class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        string temp= "";

        for (string& word : words) {
            string s=word;
            sort(s.begin(), s.end());
        
            if (s!= temp)
            {
                res.push_back(word);
                temp=s;
            }
        }
        return res;
    }
};