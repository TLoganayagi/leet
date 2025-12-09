class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxarea=0;
        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    int area=0;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j]=0;

                    while(!q.empty())
                    {
                        auto[r,c]=q.front();
                        q.pop();
                        area++;

                        for(auto &d:dirs)
                        {
                            int nr=r+d[0];
                            int nc=c+d[1];
                            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1)
                            {
                                grid[nr][nc]=0;
                                q.push({nr,nc});
                            }
                        }
                    }
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};