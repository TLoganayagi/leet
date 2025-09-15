class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;

        for (int col = s[0]; col <= s[3]; col++) {
            for (int row = s[1]; row <= s[4]; row++) {
                string cell;
                cell += col;
                cell += row;
                result.push_back(cell);
            }
        }
        return result;
    }
};