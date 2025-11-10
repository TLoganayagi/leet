class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n,0));
        for(auto &x:indices)
        {
            int r=x[0];
            int c=x[1];

            for(int col=0;col<n;col++)
            {
                mat[r][col]++;
            }
            for(int row=0;row<m;row++)
            {
                mat[row][c]++;
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] % 2 !=0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};