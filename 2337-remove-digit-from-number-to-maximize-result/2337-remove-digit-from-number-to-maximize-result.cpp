class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxAns = "";

        for(int i = 0;i<number.length();i++){
            if(number[i]==digit){
                string temp = number;
                temp.erase(i,1);
                maxAns = max(maxAns,temp);
            }                       
        }
        return maxAns;
    }
};