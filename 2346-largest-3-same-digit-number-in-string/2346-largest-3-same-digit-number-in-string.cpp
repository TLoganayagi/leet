class Solution {
public:
    string largestGoodInteger(string num) {
        string temp="";
        string maxi="";
        for(int i=0;i<num.size();i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2])
            {
                temp=num.substr(i,3);
                maxi=max(temp,maxi);
            }
        }
        return maxi;
    }
};