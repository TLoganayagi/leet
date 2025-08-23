class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        unordered_set<string> res;
        res.insert("0,0");
        for(char c:path)
        {
            if(c=='N')  y++;
            else if(c=='S')    y--;
            else if(c=='E')    x++;
            else if(c=='W')    x--;
            string curr= to_string(x)+","+to_string(y);
            if(res.count(curr))
            {
                return true;
            }
            res.insert(curr);
        }
        return false;

    }
};