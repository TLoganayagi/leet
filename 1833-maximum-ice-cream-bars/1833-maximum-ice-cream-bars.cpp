class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        long long tax=0;
        int res=0;
        sort(costs.begin(),costs.end());
        for(int x:costs)
        {
            tax+=x;
            if(tax<=coins)
                res++;
        }
        return res;
    }
};