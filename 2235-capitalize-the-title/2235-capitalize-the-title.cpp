class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        vector<string> words;
        while(ss>>word)
        {
            for(auto &c: word)
            {
                c=tolower(c);
            }
            if(word.size()>2)
            {
                word[0]=toupper(word[0]);
            }
            words.push_back(word);
        }
        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }
        
        return result;
    }
};