class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int n = columnTitle.size();

        int i=0;

        int ans = 0;
        while(i<n)
        {
            ans += ((columnTitle[i]-'A'+1)*pow(26,n-i-1));
            i++;
        }

        return ans;

    }
};