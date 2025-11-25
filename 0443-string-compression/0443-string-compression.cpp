class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> res;
        int n=chars.size();
        for (int i = 0; i < n;) {
            char letter = chars[i];
            int count = 0;
            while (i<n && chars[i] == letter) {
                i++;
                count++;
            }
            res.push_back(letter);
            if (count > 1) {
                for (char c : to_string(count))
                    res.push_back(c);
            }
        }
        chars = res;
        return chars.size();
    }
};
