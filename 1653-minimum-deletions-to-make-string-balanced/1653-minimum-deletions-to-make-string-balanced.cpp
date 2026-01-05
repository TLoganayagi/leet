class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length(),dp=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                b++;
            } else {
                dp=min(dp+1,b);
            }
        }
        return dp;
    }
};