class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for(int i=0;i<tokens.size();i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/") 
            {
                res.push(stoi(tokens[i]));
            }
            else 
            {
                int num1 = res.top(); 
                res.pop();
                int num2 = res.top();
                res.pop();
                if(tokens[i]=="+")
                {
                    res.push(num2+num1);
                }
                else if(tokens[i]=="-")
                {
                    res.push(num2-num1);
                }
                else if(tokens[i]=="*")
                {
                    res.push(num2*num1);
                }
                else if(tokens[i]=="/")
                {
                    res.push(num2/num1);
                }
            }
        }
        return res.top();
    }
};