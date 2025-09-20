class Solution {
public:
    string customSortString(string order, string s) {
        string res = "", res2 = "";
        for (char c : order) {
            for (char x : s) {
                if (x == c) res.push_back(x);
            }
        }
        for (char x : s) {
            if (order.find(x) == string::npos) {
                res2.push_back(x);
            }
        }
        
        return res + res2;
    }
};
