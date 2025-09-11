class Solution {
public:
    int secondHighest(string s) {
        unordered_set<int> digits;
        for (char c : s) {
            if (isdigit(c)) {
                digits.insert(c - '0');
            }
        }
        vector<int> nums(digits.begin(), digits.end());
        sort(nums.begin(), nums.end());
        if (nums.size() < 2) return -1;
        return nums[nums.size() - 2];
    }
};
