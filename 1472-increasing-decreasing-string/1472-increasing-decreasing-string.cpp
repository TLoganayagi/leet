class Solution {
public:
    string sortString(string s) {
        map<char,int> freq;
        for(char c:s)
        {
            freq[c]++;
        }
        string res="";
        while(res.size()<s.size())
        {
            for(auto& pair: freq)
            {
                if(pair.second >0)
                {
                    res+=pair.first;
                    pair.second--;
                }
            }
            for(auto it= freq.rbegin();it!=freq.rend();++it)
            {
                if(it->second>0)
                {
                    res+=it->first;
                    it->second--;
                }
            }
        }
        return res;
    }
};