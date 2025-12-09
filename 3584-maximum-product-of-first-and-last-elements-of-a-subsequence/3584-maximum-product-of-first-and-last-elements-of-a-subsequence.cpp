// Idea: greedy, prefix max or prefix min, scan, sliding window.
// if m == 1, then just find the element with max abs.
// let pmax be the max in A[0...i-m]
class Solution {
public:
    long long maximumProduct(vector<int>& A, int m) {
        long long res = LONG_LONG_MIN;
        for (int i = m - 1, pmax = A[0], pmin = A[0]; i < A.size(); ++i) {
            pmax = max(pmax, A[i - m + 1]);
            pmin = min(pmin, A[i - m + 1]);
            res = max(res, (long long)pmax * A[i]);
            res = max(res, (long long)pmin * A[i]);
        }
        return res;
    }
};