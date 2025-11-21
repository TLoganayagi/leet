class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        int ones=count(s.begin(),s.end(),'1');
        int twos=count(s.begin(),s.end(),'0');
        ans.insert(0, ones - 1, '1');
        ans.insert(ans.end(),twos,'0');
        ans.insert(ans.end(),'1');
        return ans;
    }
};