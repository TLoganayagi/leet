class Solution {
public:
    vector<string> ans;
    int N;

    vector<string> generateParenthesis(int n) {
        N = n;
        backtrack("", 0, 0);
        return ans;
    }

    void backtrack(string cur, int open, int close) {
        if (open == N && close == N) {
            ans.push_back(cur);
            return;
        }

        if (open < N)
            backtrack(cur + "(", open + 1, close);

        if (close < open)
            backtrack(cur + ")", open, close + 1);
    }
};
