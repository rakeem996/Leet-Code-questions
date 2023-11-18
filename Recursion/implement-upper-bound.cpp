int solve(vector<int> &arr,int x, int l, int r)
{
	if(l>r)
	{
		return l<arr.size() ? l : arr.size();
	}
	int mid = (l+r)/2;

	if(arr[mid] <= x){
		return solve(arr,x,mid+1,r);
	}else{
		return solve(arr,x,l,mid-1);
	}

}

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	return solve(arr,x,0,n-1);	
}