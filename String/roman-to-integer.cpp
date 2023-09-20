class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int n = s.size();
        int prev = s[n-1];
        int ans = mp[prev];
        for(int i=n-2; i>=0; i--)
        {
            int curr = s[i];
            if(mp[curr] >= mp[prev])
            {
                ans+=mp[curr];
            }
            else
            {
                ans-=mp[curr];
            }
            prev = curr;
        }

        return ans;
    }
};