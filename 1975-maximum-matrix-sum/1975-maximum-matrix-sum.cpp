class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (auto& row : matrix) {
            sum += accumulate(row.begin(), row.end(), 0LL,
                [&](long long acc, int x) {
                    minAbs = min(minAbs, abs(x));
                    if (x < 0) negCount++;
                    return acc + abs(x);
                });
        }

        return (negCount % 2 == 0) ? sum : sum - 2LL * minAbs;
    }
};
