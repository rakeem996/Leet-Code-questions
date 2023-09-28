class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans = "";

        while(columnNumber)
        {
            int remainder = columnNumber%26;

            if(remainder == 0)
            {
                ans = 'Z'+ans;
                columnNumber = columnNumber/26 - 1;
                continue;
            }
            ans = (char)(remainder + 64) + ans;
            columnNumber = columnNumber/26;
        }

        return ans;

    }
};