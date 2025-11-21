class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(char c:s)
        {
            mp[c]++;
        }
        int maxi1=0,maxi2=0;
        for(auto &p:mp)
        {
            if(p.first=='a'||p.first=='e' ||p.first=='i'||p.first=='o'||p.first=='u')
            {
                maxi1=max(maxi1,p.second);
            }
            else
            {
                maxi2=max(maxi2,p.second);
            }
        }
        int sum=maxi1+maxi2;
        return sum;
    }
};