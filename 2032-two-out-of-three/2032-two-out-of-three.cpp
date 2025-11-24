class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> mp;
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        for (int x : s1) mp[x]++;
        for (int x : s2) mp[x]++;
        for (int x : s3) mp[x]++;

        vector<int> res;
        for (auto &p : mp) {
            if (p.second >= 2)
                res.push_back(p.first);
        }

        return res;
    }
};
