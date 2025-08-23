class Solution {
public:
    string interpret(string command) {
        string res="";
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                res+='o';
            }
            else if(command[i]=='(' && command[i+1]=='a')
            {
                res+='a';
                res+='l';
            }
            else if(command[i]=='G')
            {
                res+='G';
            }
        }
        return res;
    }
};