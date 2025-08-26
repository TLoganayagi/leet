class Solution {
public:
    string sortSentence(string s) {
        vector<string>res;
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            res.push_back(word);
        }
        sort(res.begin(),res.end(), [](const string &a,const string &b){
            return a.back()<b.back();
        });
        string result;
        for(int i=0;i<res.size();i++)
        {
            result += res[i].substr(0, res[i].size() - 1); 
            if (i < res.size() - 1) result += " ";  
        }

        return result;

        
    }
};