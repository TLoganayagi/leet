class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int res = INT_MAX;
        for (int i = 0; i + k <= n; i++) {
            int c = 0;
            for (int j = i; j < i + k; j++) {
                if (blocks[j] == 'W')
                    c++;
            }
            res = min(res, c);
        }
        return res;
    }
};
