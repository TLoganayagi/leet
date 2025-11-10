class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int> &a, const vector<int> &b)
        {
            return a[1]>b[1];
        });
        int tot=0;
        int sum=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            if(tot<truckSize)
            {
                if((boxTypes[i][0]+tot) <= truckSize)
                {
                    sum+=boxTypes[i][0]*boxTypes[i][1];
                    tot+=boxTypes[i][0];
                }
                else
                {
                    sum+=(truckSize-tot)*boxTypes[i][1];
                    break;
                }
            }
            else
            {
                break;
            }
        }
        return sum;
    }
};