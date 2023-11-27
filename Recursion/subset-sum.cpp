bool solve(int n, int k, vector<int> &a, int i, int sum) {
    if(i>=n || sum>k) {
        if(sum == k) return true;
        else return false;
    }

    sum+=a[i];
    if(solve(n, k, a, i+1, sum) == true) return true;
    sum-=a[i];

    if(solve(n, k, a, i+1, sum) == true) return true;
    return false;

}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    return solve(n, k, a, 0, 0);
}