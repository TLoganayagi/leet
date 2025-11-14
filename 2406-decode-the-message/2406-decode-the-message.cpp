class Solution {
public:
    string decodeMessage(string key, string mess) {
        unordered_map<char,char> mp;
        char s = 'a';

        for (char c : key) {
            if (c != ' ' && mp.find(c) == mp.end()) {
                mp[c] = s;
                s++;
            }
        }

        string ans = "";
        for (char c : mess) {
            if (c == ' ')
                ans += ' ';
            else
                ans += mp[c];
        }

        return ans;
    }
};
