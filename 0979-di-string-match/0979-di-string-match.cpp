class Solution {
public:
    vector<int> diStringMatch(string s) {
        int d=s.size();
        vector<int> res(0,d+1);
        int i=0;
        for(char c:s)
        {
            if(c=='D')
            {
                res.push_back(d);
                d--;
            }
            else if(c=='I')
            {
                res.push_back(i);
                i++;
            }
        }
        res.push_back(d);
        return res;
    }
};