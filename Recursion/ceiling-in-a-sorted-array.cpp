pair<int,int> solve(vector<int> &a, int n , int x, int l, int r)
{
	if(l>r)
          return { a[r], a[l] };

        int mid = (l+r)/2;

	if(a[mid] == x)
          return { x, x };
	else if(a[mid] < x) return solve(a,n,x,mid+1,r);
	else return solve(a,n,x,l,mid-1);
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	if(a[0] > x) return {-1,a[0]};
	if(a[n-1] < x) return {a[n-1], -1};
	return solve(a,n,x,0,n-1);
}