class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(prices[j]<=prices[i])
                {
                    res.push_back(prices[i]-prices[j]);
                    break;
                }
                else if(j==n-1)
                {
                    res.push_back(prices[i]);
                }
            }

        }
        res.push_back(prices[n-1]);
        return res;
    }
};