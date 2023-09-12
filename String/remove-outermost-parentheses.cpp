class Solution {
public:

    string removeOuter(string segment)
    {
        return segment.substr(1,segment.length()-2);
    }

    string removeOuterParentheses(string s) {
        int n = s.size();

        string ans = "";
        string segment = "";

        vector<char> stk;

        for(int i=0; i<n; i++)
        {

            if(s[i] == '(' || segment.size() == 0) stk.push_back(s[i]);
            else stk.pop_back();

            segment += s[i];

            if(stk.size() == 0)
            {
                ans += removeOuter(segment);
                segment =  "";
            }
        }

        return ans;
        
    }
};