class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> mp;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        string ans = "";

        while(!mp.empty())
        {
            //find max
            int mx = 0;
            char mxChar;
            for(auto x: mp)
            {
                if(x.second > mx)
                {
                    mx = x.second;
                    mxChar = x.first;
                }
            }

            while(mx>0)
            {
                ans+=mxChar;
                mx--;
            }

            mp.erase(mxChar);
        }

        return ans;
    }
};