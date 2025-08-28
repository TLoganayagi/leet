class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>res;
        for(int i=0;i<rectangles.size();i++)
        {
            res.push_back(min(rectangles[i][0],rectangles[i][1]));
        }
        int temp = *max_element(res.begin(),res.end());
        int count=0;
        for(int x:res)
        {
            if(x==temp) count++;
        }
        return count;
    }
};