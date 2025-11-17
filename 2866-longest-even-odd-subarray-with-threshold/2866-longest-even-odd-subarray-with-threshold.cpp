class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0 || nums[i] > threshold)
                continue;
            int len = 1;  
            int parity = 1; 
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > threshold) break;
                if (nums[j] % 2 != parity) break;
                len++;
                parity ^= 1; 
            }
            res = max(res, len);
        }

        return res;
    }
};
