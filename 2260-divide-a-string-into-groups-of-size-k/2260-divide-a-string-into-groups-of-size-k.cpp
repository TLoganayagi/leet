class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int n=s.size();
        //int n2=n/k;
        for(int i=0;i<n;i+=k)
        {
            string temp="";
            for(int j=i;j<i+k && j<n;j++)
            {
                temp+=s[j];
            }
            while (temp.size() < k) {
                temp += fill;
            }
            res.push_back(temp);
        }
        return res;   
    }
};