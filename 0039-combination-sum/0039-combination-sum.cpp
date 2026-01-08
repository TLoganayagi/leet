class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        /*vector<vector<int>> res;
        for(int i=0;i<candidates.size();i++)
        {
            if(candidates[i]<target)
            {
                if(target%candidates[i]==0)
                {
                    vector<int> temp;
                    temp.push_back(target/candidates[i],candidates[i]);
                    res.push_back(temp);
                }
                else
                {
                    for(int j=i+1;j<candidates.size();j++)
                    {
                        if(candidates[i]+candidates[j]>target)
                        {
                            continue;
                        }
                        else if(candidates[i]+candidates[j]==target)
                    }
                }

            }
        }*/
        vector<vector<vector<int>>> dp(target+1);
        dp[0].push_back(vector<int>());

        for(int c:candidates)
        {
            for(int i=c;i<=target;i++)
            {
                for(auto &p:dp[i-c])
                {
                    vector<int> newp=p;
                    newp.push_back(c);
                    dp[i].push_back(newp);
                }
            }
        }
        return dp[target];
    }
};