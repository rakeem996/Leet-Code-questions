class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.size();

        vector<int> vc(26,0);

        for(int i=0; i<n; i++)
        {
            vc[s[i]-'a']++;
        }
        int ans = -1;
        for(int i=0; i<n ;i++)
        {
            if(vc[s[i]-'a'] == 1)
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};