class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> s1={'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> s2={'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> s3={'z','x','c','v','b','n','m'};
        vector<string> res;
        for(string word: words)
        {
            string low=word;
            for(char &c:low)
            {
                c=tolower(c);
            }
            unordered_set<char>* row;
            if(s1.count(low[0])) row=&s1;
            else if(s2.count(low[0])) row=&s2;
            else row=&s3;
            bool valid=true;
            for(char c:low)
            {
                if (!row->count(c)) {
                    valid = false;
                    break;
                }
            }

            if (valid) res.push_back(word); 
        }

        return res;
    }
};