class Solution {
public:
    int getValue(string word) {
        int num = 0;
        for (char c : word) {
            num = num * 10 + (c - 'a'); 
        }
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return getValue(firstWord) + getValue(secondWord) == getValue(targetWord);
    }
};
