class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        char col1=s[0];
        char col2=s[3];
        char row1=s[1];
        char row2=s[4];
        for(char c=col1;c<=col2;c++)
        {
            for(int r=row1;r<=row2;r++)
            {
                string temp="";
                temp+=c;
                temp+=r;
                res.push_back(temp);
            }
        }
        return res;   
    }
};