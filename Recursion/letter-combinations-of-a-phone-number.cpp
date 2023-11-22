class Solution {
public:
    void solve(string digits, string mpp[], vector<string>& ans,string output, int i)
    {
        if(i >= digits.size()){
            ans.push_back(output);
            return ;
        }

        string currStr = mpp[digits[i] - '0'];

        for(int j=0; j<currStr.size(); j++)
        {
            output.push_back(currStr[j]);
            solve(digits, mpp, ans, output, i+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        
        string mpp[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        vector<string> ans;
        if(digits.size() == 0) return ans;

        solve(digits, mpp, ans,"", 0);

        return ans;
    }
};