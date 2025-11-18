class Solution {
public:
    int captureForts(vector<int>& forts) {
        int res = 0;

        for (int i = 0; i < forts.size(); i++) 
        {
            if (forts[i] == 1 || forts[i] == -1) 
            {
                int ans = 0;  

                for (int j = i + 1; j < forts.size(); j++) 
                {
                    if (forts[j] == 0) 
                    {
                        ans++;
                    }
                    else if ((forts[i] == 1 && forts[j] == -1) ||
                             (forts[i] == -1 && forts[j] == 1)) 
                    {
                        res = max(res, ans);
                        break;
                    }
                    else 
                    {
                        break;
                    }
                }
            }
        }

        return res;
    }
};
