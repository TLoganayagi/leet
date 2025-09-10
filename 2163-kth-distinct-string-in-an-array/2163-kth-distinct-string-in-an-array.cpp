class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        for(string x: arr)
        {
            freq[x]++;
        }
        int count=0;
        for(string& x: arr)
        {
            if(freq[x]==1)
            {
                count++;
                if(count==k)
                {
                    return x;
                }
            }
        }
        return "";
    }
};