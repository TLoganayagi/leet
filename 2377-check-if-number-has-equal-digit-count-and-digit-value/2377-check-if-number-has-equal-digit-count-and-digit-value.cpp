class Solution {
public:
    bool digitCount(string num) {
        //string num2=num;
        //sort(num.begin(),num.end());
        unordered_map<char,int> mp1;
        for(int x:num)
        {
            mp1[x]++;
        }
        for(int i=0;i<num.size();i++)
        {
            if(mp1[i+'0'] != num[i]-'0')
                return false;
        }
        return true;
    }
};