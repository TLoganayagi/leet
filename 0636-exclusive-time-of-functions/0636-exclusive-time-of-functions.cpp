class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n,0);
        stack<int> st;
        int pt=0;
        for(auto &p:logs)
        {
            int pos1=p.find(':');
            int pos2=p.find(':',pos1+1);
            int id=stoi(p.substr(0,pos1));
            string type=p.substr(pos1+1,pos2-pos1-1);
            int time=stoi(p.substr(pos2+1));

            if(type=="start")
            {
                if(!st.empty())
                {
                    res[st.top()]+=(time-pt);
                }
                st.push(id);
                pt=time;
            }
            else
            {
                res[st.top()]+=(time-pt+1);
                st.pop();
                pt=time+1;
            }
        }
        return res;
    }
};