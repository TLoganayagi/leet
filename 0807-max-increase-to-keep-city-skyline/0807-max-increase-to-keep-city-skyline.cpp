class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>row(n,INT_MIN);
        vector<int>col(n,INT_MIN);
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<n;c++)
            {
                row[r]=max(row[r],grid[r][c]);
                col[c]=max(col[c],grid[r][c]);
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                res+=min(row[i],col[j])-grid[i][j];
            }
        }
        return res;

    }
};