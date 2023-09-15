class Solution {
public:
    int myAtoi(string s) {
        
        int n = s.size();

        long int ans = 0;

        int i=0;
        while(s[i] == ' ') i++;

        bool positive = s[i] == '+';
        bool negative = s[i] == '-';
        positive == true ? i++ : i;
        negative == true ? i++ : i;

        while(s[i] >='0' && s[i] <= '9' && i<n)
        {
          ans = ans * 10;
          ans += s[i]-'0';
          if(ans>=INT_MAX||ans<=INT_MIN) break;
          i++;
        }

        if(negative) ans = ans * -1;

        if(ans >= INT_MAX) return INT_MAX;
        if(ans <= INT_MIN) return INT_MIN;

        return int(ans);
    }
};