class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        //unordered_map<string,int> um1;
        int mini=INT_MAX;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                {
                    int sum=i+j;
                    if(sum<mini)
                    {
                        res.clear();
                        res.push_back(list1[i]);
                        mini=sum;
                    }
                    else if(sum == mini)
                    {
                        res.push_back(list1[i]);
                    }
                    
                }
            }
        }
        
        return res;
    }
};