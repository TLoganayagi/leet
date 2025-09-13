class Solution {
public:
    int minTimeToType(string word) {
        int res=0;
        int ptr='a';
        for(int i=0;i<word.size();i++)
        {
            int clk=abs(word[i]-ptr);
            int anticlk=26-clk;
            res+=min(clk,anticlk)+1;
            ptr=word[i];
        }
        return res;
    }
};