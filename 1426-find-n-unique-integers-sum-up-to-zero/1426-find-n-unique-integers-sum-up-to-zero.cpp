class Solution {
public:
    vector<int> sumZero(int n) {
        int checker=n/2;
        vector<int>res;
        for(int i=1;i<=checker;i++)
        {
            res.push_back(0-i);
            res.push_back(i-0);
        }
        if(n%2!=0)
            res.push_back(0);
        return res;
    }
};