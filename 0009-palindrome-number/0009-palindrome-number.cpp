class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string si=s;
        reverse(si.begin(),si.end());
        return (s==si);
    }
};