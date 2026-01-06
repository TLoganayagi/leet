class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel = {'a','e','i','o','u','A','E','I','O','U'};
        vector<char> temp;
        for (char c : s) {
            if (find(vowel.begin(), vowel.end(), c) != vowel.end()) {
                temp.push_back(c);
            }
        }
        sort(temp.begin(), temp.end());

        int idx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (find(vowel.begin(), vowel.end(), s[i]) != vowel.end()) {
                s[i] = temp[idx];
                idx++;
            }
        }
        return s;
    }
};
