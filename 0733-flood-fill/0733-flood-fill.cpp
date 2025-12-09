class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int old=image[sr][sc];
        if(old==color)  return image;

        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;

        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty())
        {
            auto[r,c]=q.front();
            q.pop();
            for (auto &d : dirs) {
                int nr = r + d[0];
                int nc = c + d[1];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && image[nr][nc] == old) {
                    image[nr][nc] = color;
                    q.push({nr, nc});
                }
            }
        }

        return image;
    }
};