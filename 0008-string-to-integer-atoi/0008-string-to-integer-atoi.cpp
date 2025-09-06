class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, n = s.size();
        long long result = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            int dig = s[i] - '0';
            result = result * 10 + dig;
            if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            if (result * sign < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return result * sign;
    }
};