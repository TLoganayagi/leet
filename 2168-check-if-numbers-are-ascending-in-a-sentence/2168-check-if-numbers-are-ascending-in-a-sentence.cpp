class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> res;
        stringstream ss(s);
        string token;
        while (ss >> token) {
            if (isdigit(token[0])) {
                res.push_back(stoi(token));
            }
        }
        for(int i=1;i<res.size();i++)
        {
            if(res[i]<=res[i-1])
                return false;
        }
        return true;
    }
};