class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int n=s.size();
        int st=0;
        if(n==0)
        {
            return res;
        }
        for(int end=0;end<n;++end)
        {
            if(end==n-1 || s[end]!=s[end+1])
            {
                int count=end-st+1;
                if(count>=3)
                {
                    res.push_back({st,end});
                }
                st=end+1;
            }
        }
        return res;
    }
};