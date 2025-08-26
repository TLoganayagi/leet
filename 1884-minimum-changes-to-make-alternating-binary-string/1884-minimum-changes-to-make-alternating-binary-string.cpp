class Solution {
public:
    int minOperations(string s) {
        int count0=0,count1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=(i%2==0?'0':'1'))
            {
                count0++;
            }
            else if(s[i]!=(i%2==0?'1':'0'))
            {
                count1++;
            }
        }
        return min(count1,count0);
        
    }
};