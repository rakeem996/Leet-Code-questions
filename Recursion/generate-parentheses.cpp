class Solution {
public:
    void solve(int n, vector<string>& ans, string output, int i, int j)
    {
        //base case
        if(i>=n && j>=n) {
            ans.push_back(output);
            return;
        }

        if(j==i) {
            output.push_back('(');
            solve(n, ans,output,i+1, j );
            output.pop_back();
        }
        else if(i>=n && j<n) {
            output.push_back(')');
            solve(n, ans,output,i, j+1 );
            output.pop_back();
        }
        else {

            output.push_back('(');
            solve(n, ans,output,i+1, j );
            output.pop_back();

            output.push_back(')');
            solve(n, ans,output,i, j+1 );
            output.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        string output = "";
        int i=0; 
        int j=0;
        solve(n, ans , output, i, j);

        return ans;
    }
};