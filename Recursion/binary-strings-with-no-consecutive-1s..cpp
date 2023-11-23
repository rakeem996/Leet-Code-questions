void solve(int n, vector<string>& ans, string output, int i, char prev)
{
    if(i >= n)
    {
        ans.push_back(output);
        return;
    }

    if(prev == '1') {

        output.push_back('0');
        solve(n, ans, output, i+1,'0' );
        output.pop_back();
    } else {

        output.push_back('1');
        solve(n, ans, output, i+1, '1');
        output.pop_back();

        output.push_back('0');
        solve(n, ans, output, i+1,'0');
        output.pop_back();
    }

}

vector<string> generateString(int N) {
    // Write your code here.
    vector<string> ans;
    string output = "";

    solve(N, ans, output, 0, '0');
    sort(ans.begin(), ans.end());
    return ans;
}