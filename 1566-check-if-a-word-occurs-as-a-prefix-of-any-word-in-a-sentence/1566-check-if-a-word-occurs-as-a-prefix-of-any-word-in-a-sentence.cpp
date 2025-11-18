class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string word;
        int i= 1; 
        while (ss >> word) {
            if (word.find(searchWord) == 0) {
                return i;
            }
            i++;
        }
        return -1;
    }
};