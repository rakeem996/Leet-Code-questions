
int findCeil(vector<int>& arr, int n, int x)
{
	int ans = -1;
	int l=0,r=n-1;
	int check = 0;

	while(l<=r)
	{
		int mid = (l+r)/2;

		if(arr[mid] <= x)
		{
			ans = mid;
			l = mid+1;
			if(arr[mid] == x) check = 1;
		}
		else
		{
			r = mid-1;
		}
	}

	return check?ans:-1;
}

int findFloor(vector<int>& arr, int n, int x)
{
	int ans = -1;
	int l=0,r=n-1;
	int check = 0;

	while(l<=r)
	{
		int mid = (l+r)/2;

		if(arr[mid] >= x)
		{
			ans = mid;
			r = mid-1;
			if(arr[mid] == x) check = 1;
		}
		else
		{
			l = mid+1;
		}
	}

	return check?ans:-1;
}

int count(vector<int>& arr, int n, int x) {
	
	int ceil = findCeil(arr,n,x);
	int floor = findFloor(arr,n,x);

	if(floor == -1 || ceil == -1) return 0;
	return ceil-floor+1;
}
