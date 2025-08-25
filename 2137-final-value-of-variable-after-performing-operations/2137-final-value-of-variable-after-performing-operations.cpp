class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        for(string x:operations)
        {
            if(x=="++X" || x=="X++")
            {
                sum++;
            }
            else if(x=="--X" || x=="X--")
            {
                sum--;
            }
        }
        return sum;
    }
};