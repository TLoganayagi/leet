class Solution {
public:
    bool squareIsWhite(string coordinates) {
        coordinates[0]-='a';
        int temp=0;
        for(int i=0;i<coordinates.size();i++)
        {
            temp+=(int)coordinates[i];
        }
        if(temp%2==0)
            return true;
        else
            return false;
    }
};