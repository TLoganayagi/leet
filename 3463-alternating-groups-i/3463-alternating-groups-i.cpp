class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n= colors.size();
        int count=0;
        if(colors[n-1]!=colors[0] && colors[1]!=colors[0])
            count++;
        if(colors[n-2]!=colors[n-1] && colors[0]!=colors[n-1])
            count++;
        for(int i=1;i<n-1;i++)
        {
            if(colors[i-1]!=colors[i] && colors[i+1]!=colors[i])
                count++;
        }
        return count;
    }
};