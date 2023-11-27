void solve(string s, set<string>& ans,string output, int i)
{
    if(i >= s.size())
    {
        ans.insert(output);
        return;
    }

    solve(s, ans, output, i+1);

    output.push_back(s[i]);
    solve(s, ans, output, i+1);
    output.pop_back();

}

string moreSubsequence(int n, int m, string a, string b)
{
    // Write your code here
    set<string> ansA;

    set<string> ansB;

    string output = "";

    solve(a,ansA,output, 0);

    solve(b, ansB,output, 0);

    if(ansA.size() >= ansB.size()) return a;
    else return b;
}