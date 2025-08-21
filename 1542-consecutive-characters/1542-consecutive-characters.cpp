class Solution {
public:
    int maxPower(string s) {
        int max_count=1;
        int count=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
            }
            else
            {
                count=1;
            }
            max_count=max(max_count,count);
        }
        return max_count;
        
    }
};