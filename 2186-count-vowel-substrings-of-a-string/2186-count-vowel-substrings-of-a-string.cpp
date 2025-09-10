class Solution {
public:
    bool isVowel(char s)
    {
        return (s=='a'||s=='e'||s=='i'||s=='o'||s=='u');
    }
    int countVowelSubstrings(string word) 
    {
        int n = word.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            if (!isVowel(word[i])) continue; 
            unordered_set<char> seen;
            for (int j = i; j < n; j++) {
                if (!isVowel(word[j])) break; 
                seen.insert(word[j]);
                if (seen.size() == 5) {
                    total++;
                }
            }
        }

        return total;
    }
};