class Solution {
public:
    string removeDigit(string number, char digit) {
        string temp="";
        string maxi="";
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==digit)
            {
                temp=number.substr(0,0+i);
                temp+=number.substr(i+1,number.size()-1);
            }
            maxi=max(temp,maxi);
        }
        return maxi;
    }
};