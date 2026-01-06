class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int res=0;
        vector<int> prefix(n);
        vector<int> sufix(n);
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,height[i]);
            prefix[i]=maxi;
        }
        maxi=0;
        for(int j=n-1;j>=0;j--)
        {
            maxi=max(maxi,height[j]);
            sufix[j]=maxi;
        }
        for(int h=0;h<n;h++)
        {
            if(min(prefix[h],sufix[h])-height[h]>0)
                res+=min(prefix[h],sufix[h])-height[h];
        }
        return res;
    }
};