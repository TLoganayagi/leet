class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        // store frequency of first word
        unordered_map<char,int> freq;
        for (char c : words[0]) {
            freq[c]++;
        }

        // for each next word, shrink freq using minimum counts
        for (int i = 1; i < words.size(); i++) {
            unordered_map<char,int> temp;
            for (char c : words[i]) {
                temp[c]++;
            }

            // update freq to hold minimum of existing and current
            for (auto &p : freq) {
                char ch = p.first;
                freq[ch] = min(freq[ch], temp[ch]);
            }
        }

        // build result
        vector<string> result;
        for (auto &p : freq) {
            while (p.second-- > 0) {
                result.push_back(string(1, p.first));
            }
        }
        return result;
    }
};
