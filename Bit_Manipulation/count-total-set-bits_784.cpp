int maxPow2(int n) {
    int i = 0;

    while((1 << i) <= n) {
        i++;
    }

    return i-1;
}

int solve(int n) {
    if(n == 0) return 0;

    int x = maxPow2(n);

    int till2powx = (1 << (x-1)) * x;

    int msbafter2powx = n - (1 << x) + 1;

    int nxtset = n - (1 << x);

    int ans = till2powx + msbafter2powx + solve(nxtset);

    return ans;
}

int countSetBits(int N)
{
    return solve(N);
}