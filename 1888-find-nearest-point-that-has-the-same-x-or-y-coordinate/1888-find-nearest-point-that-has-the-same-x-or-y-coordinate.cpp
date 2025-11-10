class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair<int,int>>arr; 

        for (int i=0; i<points.size();i++) {
            if (points[i][0]==x || points[i][1]==y) {
                int dist = abs(x-points[i][0]) + abs(y-points[i][1]);
                arr.push_back({dist, i});
            }
        }
        if (arr.empty())
            return -1;   
        auto it = min_element(arr.begin(), arr.end());
        return it->second;  
    }
};
