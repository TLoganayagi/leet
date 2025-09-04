class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s+s;
        string trim=doubled.substr(1,doubled.size()-2);
        return trim.find(s)!=string::npos;
    }
};