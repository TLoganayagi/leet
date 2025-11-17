class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;

        for (int p : prices) {
            mini = min(mini, p);
            profit = max(profit, p - mini);
        }

        return profit;
    }
};
