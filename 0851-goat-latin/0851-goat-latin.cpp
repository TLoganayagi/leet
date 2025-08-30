class Solution {
public:
    string toGoatLatin(string sentence) {
        string vowel="aeiouAEIOU";
        string word,res;
        int count=1;
        stringstream ss(sentence);
        while(ss>>word)
        {
            if(vowel.find(word[0])!=string::npos)
            {
                res+=word;
            }
            else
            {
                res+=word.substr(1)+word[0];
            }
            res+="ma";
            res.append(count,'a');
            res+=" ";
            count++;

        }
        if(!res.empty())    res.pop_back();
        return res;
    }
};