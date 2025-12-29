class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> res(2, 0);
        int maxOnes=0;
        for (int i=0;i<mat.size();i++) {
            int count=0;
            for (int j=0; j<mat[i].size();j++) {
                if (mat[i][j] == 1)
                    count++;
            }
            if (count > maxOnes) {
                maxOnes = count;
                res[0] = i;
                res[1] = count;
            }
        }
        return res;
    }
};
