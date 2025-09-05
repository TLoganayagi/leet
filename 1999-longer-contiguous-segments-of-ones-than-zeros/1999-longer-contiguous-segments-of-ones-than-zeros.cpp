class Solution {
public:
    bool checkZeroOnes(string s) {
        int max1 = 0, max0 = 0;  
        int curr1 = 0, curr0 = 0; 

        for(char c : s) {
            if(c == '1') {
                curr1++;
                curr0 = 0;
            } else {
                curr0++;
                curr1 = 0;
            }
            max1 = max(max1, curr1);
            max0 = max(max0, curr0);
        }

        return max1 > max0;
    }
};
