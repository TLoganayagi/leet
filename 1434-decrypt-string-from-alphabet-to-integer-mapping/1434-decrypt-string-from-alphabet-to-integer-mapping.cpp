class Solution {
public:
    string freqAlphabets(string s) {
        string res="";
        string temp="";
        int i=s.size()-1;
        while(i>=0)
        {
            if(s[i]=='#')
            {
                temp+=s[i-2];
                temp+=s[i-1];
                res+=(char)('a'-1)+stoi(temp);
                temp="";
                i=i-3;
            }else{
                temp+=s[i];
                res+=(char)('a'-1)+stoi(temp);
                temp="";
                i--;
            }
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};