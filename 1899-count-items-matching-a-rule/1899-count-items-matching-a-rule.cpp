class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0,idx;
        if(ruleKey=="type") idx=0;
        else if(ruleKey=="color")   idx=1;
        else if(ruleKey=="name")    idx=2;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][idx]==ruleValue)
                count++;
        }
        return count;
        
    }
};