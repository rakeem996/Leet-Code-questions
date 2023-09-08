
int findCount(vector<int> &arr, int n,long double mid)
{
	int count = 0;

	for(int i=1; i<n; i++)
	{
		int eleInBetween = (arr[i]-arr[i-1])/(mid);

		if((arr[i]-arr[i-1]) == eleInBetween * mid) eleInBetween--;

		count+=eleInBetween;
	}

	return count;
}

long double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	
	int n=arr.size();
	long double l=0; //least dist could only be 0
	long double r=0; //max dist between adj stations
	
	for(int i=1; i<n ;i++)
	{
		r = max(r, (long double)(arr[i]-arr[i-1]));
	}

	long double dist = 1e-6;
	while(r-l > dist)
	{
		long double mid = (l+r)/2.0;

		int count = findCount(arr,n,mid);

		if(count>k) l=mid;
		else r=mid;
	}

	return r;
}