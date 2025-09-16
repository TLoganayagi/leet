class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string temp = to_string(num);
        int count = 0;
        for (int i = 0; i <= temp.size() - k; i++) {  
            int temp2 = stoi(temp.substr(i, k));
            if (temp2 != 0 && num % temp2 == 0) {
                count++;
            }
        }
        return count;
    }
};
