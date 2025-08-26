class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word,res;
        while(ss >> word && k>0)
        {
            if(!res.empty())    res+=" ";
            res+=word;
            k--;
        }
        return res;
        
    }
};