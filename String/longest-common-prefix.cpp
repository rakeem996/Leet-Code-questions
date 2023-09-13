class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        

        int n = strs.size();

        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[n-1];

        int j=0;
        while(first[j] == last[j] && j<first.length() && j<last.length()) j++;

        first = first.substr(0,j);

        return first;
    }
};