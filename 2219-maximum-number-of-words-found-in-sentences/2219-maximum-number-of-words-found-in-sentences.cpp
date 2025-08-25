class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_count=0;
        for(string s1:sentences)
        {
            int count=1;
            for(char s2:s1)
            {
                if(s2==' ')
                    count++;
            }
            max_count=max(count,max_count);
        }
        return max_count;
    }
};