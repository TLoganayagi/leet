class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int freq[256] = {0};
            for (int j = i; j < n; j++) {
                freq[s[j]]++;
                if (freq[s[j]] > 2) break;
                ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};
