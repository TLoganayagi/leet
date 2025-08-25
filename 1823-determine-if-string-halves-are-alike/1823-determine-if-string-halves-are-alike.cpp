class Solution {
public:
    bool vowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }

    bool halvesAreAlike(string s) {
        int mid = s.size() / 2;
        int count1 = 0, count2 = 0;

        for (int i = 0; i < mid; i++) {
            if (vowel(s[i])) count1++;
            if (vowel(s[i + mid])) count2++;
        }
        return count1 == count2;
    }
};
