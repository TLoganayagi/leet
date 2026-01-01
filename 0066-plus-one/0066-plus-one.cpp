class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        string s="";
        for(int x:digits)
        {
            s+=x+'0';
        }
        int i = s.size() - 1;
        while (i >= 0 && s[i] == '9') {
            s[i] = '0';
            i--;
        }
        if (i >= 0) {
            s[i]++;
        } else {
            s = '1' + s;
        }
        for(char c:s)
        {
            res.push_back(c-'0');
        }
        return res;
    }
};