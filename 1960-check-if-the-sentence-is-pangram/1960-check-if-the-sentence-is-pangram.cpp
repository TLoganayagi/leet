class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s;
        s.insert(sentence.begin(),sentence.end());
        if(s.size()>=26)
            return true;
        else
            return false;
    }
};