class Solution {
public:
    long long solve(int i,int sign,string s, long long res)
    {
        if(res*sign >= INT_MAX) return INT_MAX;

        if(res*sign <= INT_MIN) return INT_MIN;

        if(s[i] == ' ' || !isdigit(s[i])) return res*sign;

        int curr = s[i]-'0';

        return solve(i+1,sign,s,res*10+curr);
    }
    int myAtoi(string s) {
        
        int i=0;
        int n=s.size();

        while(s[i] == ' ' && i<n)
        {
            i++;
        }

        int flag = 1;
        if(s[i]=='+')
        {
            flag = 1;
            i++;
        }
        else if(s[i]=='-')
        {
            flag = -1;
            i++;
        }

        return solve(i,flag,s,0);
    }
};