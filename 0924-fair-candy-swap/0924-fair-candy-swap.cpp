class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int a=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int b=accumulate(bobSizes.begin(),bobSizes.end(),0);
        int diff= (b-a)/2;
        unordered_set<int> alice_set(aliceSizes.begin(), aliceSizes.end());
        for (int y : bobSizes) {
            int x = y - diff;
            if (alice_set.count(x)) {
                return {x, y};
            }
        }
        return {};
    }
};