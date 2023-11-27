void solve(vector<int> a, long long k,vector<vector<int>>& ans, int i )
{
    if(i>=a.size()) return;

    vector<int> ins;
    long long sum = 0;

    for(int j=i; j<a.size(); j++) {
        sum+=a[j];
        ins.push_back(a[j]);
        if(sum == k) {
            ans.push_back(ins);
            break;
        }
    }

    solve(a, k, ans, i+1);
}

vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
    // Write your code here
    vector<vector<int>> ans;

    solve(a, k, ans, 0);

    return ans;
}