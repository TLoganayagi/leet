class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        //licensePlate=tolower(licensePlate);
        string s;
        for(char c:licensePlate)
        {
            if(isalpha(c))
            {
                s+=tolower(c);
            }
        }
        vector<string> res;
        for (string &w : words) {
            string temp = w;
            bool ok = true;
            for (char c : s) {
                auto pos = temp.find(c);
                if (pos == string::npos) {
                    ok = false;
                    break;
                }
                temp.erase(pos, 1); 
            }
            if (ok) res.push_back(w);
        }
        string ans = res[0];
        for (int i = 1; i < res.size(); i++) {
            if (res[i].size() < ans.size()) {
                ans = res[i];  
            }
        }
        return ans;
    }
};