class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();

        string ans = "";

        for(int i=0; i<n; i++)
        {
            //for odd palindrome
            int l=i,r=i;

            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1 > ans.length()) ans = s.substr(l,r-l+1);

                l--;
                r++;
            }

            //for even palindrom
            l=i,r=i+1;

            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1 > ans.length()) ans = s.substr(l,r-l+1);

                l--;
                r++;
            }
        }


        return ans;
    }
};