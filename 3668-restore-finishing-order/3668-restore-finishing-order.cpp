class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> arr;
        for(int i=0;i<order.size();i++)
        {
            if(find(friends.begin(), friends.end(), order[i]) != friends.end())
            {
                arr.push_back(order[i]);
            }
        }
        return arr;
    }
};