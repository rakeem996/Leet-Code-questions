class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length();

        int i = n-1;
        while(s[i] == ' ')
        {
            i--;
        }
        //will lend on a non space
        int count = 0;
        while( (i>=0) && ((s[i]>= 'a' && s[i] <= 'z') || (s[i]>= 'A' && s[i] <= 'Z')))
        {
            count++;
            i--;
        }
        return count;
    }
};