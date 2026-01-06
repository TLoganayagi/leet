class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int st=0,maxlen=0;
        unordered_map<int,int> basket;
        for(int i=0;i<fruits.size();i++)
        {
            basket[fruits[i]]++;
            while(basket.size()>2)
            {
                basket[fruits[st]]--;
                if(basket[fruits[st]]==0)
                {
                    basket.erase(fruits[st]);
                }
                st++;
            }
            maxlen=max(maxlen,i-st+1);
        }
        return maxlen;
    }
};