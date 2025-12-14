class Solution {
public:
    int minSteps(string s, string t) {
        //sort(s.begin(),s.end());
        //sort(t.begin(),t.end());
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c:s)
        {
            mp1[c]++;
        }
        for(char c:t)
        {
            mp2[c]++;
        }
        int steps = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            if (mp2[c] > mp1[c]) {
                steps += mp2[c] - mp1[c];
            }
        }

        return steps;
    }
};