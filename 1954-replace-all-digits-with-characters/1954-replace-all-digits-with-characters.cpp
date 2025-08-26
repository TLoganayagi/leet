class Solution {
public:
    string replaceDigits(string s) {
        int num=0;
        for(int i=1;i<s.size();i+=2)
        {
            num=s[i]-'0';
            s[i]=s[i-1]+num;
            num=0;
        }
        return s;
        
    }
};