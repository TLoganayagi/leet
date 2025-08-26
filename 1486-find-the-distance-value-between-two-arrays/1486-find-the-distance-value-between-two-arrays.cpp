class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int x:arr1)
        {
            int i=0;
            bool valid= true;
            while(i<arr2.size())
            {
                int num=abs(x-arr2[i]);
                if(num<=d)
                {
                    valid=false;
                    break;
                }
                i++;
            }
            if(valid)   count++;
        }
        return count;
        
    }
};