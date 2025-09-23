class Solution {
public:
    bool isPalin(int st, int e, const string& s) {
            while (st < e) {
                if (s[st] != s[e]) return false;
                st++;
                e--;
            }
            return true;
        }
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int max_len = 1;
        int start = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalin(i, j, s) && (j - i + 1) > max_len) {
                    start = i;
                    max_len = j - i + 1;
                }
            }
        }
        return s.substr(start, max_len);
    }
};