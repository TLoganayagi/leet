class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // frequency of characters in 'chars'
        vector<int> freq(26, 0);
        for (char c : chars) {
            freq[c - 'a']++;
        }
        
        int count = 0;
        
        for (string &s : words) {
            vector<int> temp(26, 0);
            bool valid = true;
            
            for (char c : s) {
                temp[c - 'a']++;
                if (temp[c - 'a'] > freq[c - 'a']) {
                    valid = false;  // word uses char too many times
                    break;
                }
            }
            
            if (valid) {
                count += s.size();
            }
        }
        
        return count;
    }
};
