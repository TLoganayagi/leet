#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> freq;
        for (auto &w : words) {
            for (char c : w) {
                freq[c]++;
            }
        }

        int n = words.size();
        for (auto &p : freq) {
            if (p.second % n != 0) return false;
        }

        return true;
    }
};
