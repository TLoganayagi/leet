#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class Solution {
public:
    string reorderSpaces(string text) {
        string res = "";
        stringstream ss(text);
        string word;
        vector<string> words;
        int c = 0;

        // Count spaces
        for (char ch : text) {
            if (ch == ' ') {
                c++;
            }
        }

        // Extract words and store them in a vector
        while (ss >> word) {
            words.push_back(word);
        }

        int count = words.size();

        // Handle the special case of only one word
        if (count == 1) {
            return words[0] + string(c, ' ');
        }

        // Calculate spaces per gap and remaining spaces
        int tot = c / (count - 1);
        int rem = c % (count - 1);

        // Reconstruct the string by adding words and spaces
        for (int i = 0; i < count; ++i) {
            // Append the correct word from the vector
            res += words[i]; 
            
            // Add spaces after each word, except the last one
            if (i < count - 1) {
                res += string(tot, ' ');
            }
        }

        // Add any remaining spaces at the end
        res += string(rem, ' ');

        return res;
    }
};