class Solution {
public:
    bool vowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' ||c=='O'||c=='U')
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool halvesAreAlike(string s) {
        vector<char> res1;
        vector<char> res2;
        int mid=s.size()/2;
        int count1=0,count2=0;
        for(int i=0;i<mid;i++)
        {
            res1.push_back(s[i]);
        }
        for(int i=mid;i<s.size();i++)
        {
            res2.push_back(s[i]);
        }
        for(int i=0;i<mid;i++)
        {
            if(vowel(res1[i]))
            {
                count1++;
            }
            if(vowel(res2[i]))
            {
                count2++;
            }
        }
        if(count1==count2)
            return true;  
        return false;
        
    }
};