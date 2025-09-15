class Solution {
public:
    int convertTime(string current, string correct) {
        int cur = 60 *stoi(current.substr(0, 2)) + stoi(current.substr(3, 2));
        int target = 60 *stoi(correct.substr(0, 2)) + stoi(correct.substr(3, 2));
        int diff = target - cur;
        int count = 0;
        vector<int> steps = {60, 15, 5, 1};
        for (int step : steps){
            count += diff / step;
            diff %= step;
        }
        return count;
    }
};