class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> res;
        for(int i=0;i<points.size();i++)
        {
            res.push_back(points[i][0]);
        }
        sort(res.begin(),res.end());
        int diff=0,maxdiff=0;
        for(int i=1;i<res.size();i++)
        {
            diff=res[i]-res[i-1];
            maxdiff=max(diff,mindiff);
        }
        return maxdiff;
    }
};