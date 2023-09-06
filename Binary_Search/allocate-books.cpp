#include "limits"


int countNoOfStudents(vector<int>&arr,int n,int mid)
{
    int count = 1;

    int sum = 0;
    for(int i=0; i<n ;i++)
    {
        sum+=arr[i];
        if(sum > mid)
        {
            count++;
            sum = arr[i];
        }
    }

    return count;
}

int maxOf(vector<int>&arr,int n,int mid)
{
    int mx = INT_MIN;
    int sum = 0;

    for(int i=0; i<n ;i++)
    {
        sum+=arr[i];
        if(sum > mid)
        {
            mx = max(mx,sum-arr[i]);
            sum = arr[i];
        }
    }

    return mx;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.

    int l = INT_MIN;
    for(auto x: arr) l=max(l,x);
    int r = 0;
    for(auto x: arr) r+=x;

    if(m > n) return -1;

    while(l<=r)
    {
        int mid = (l+r)/2;

        int count = countNoOfStudents(arr,n,mid);

        if(count <= m) r = mid-1;
        else l = mid+1;

        // if no of students less r=mid-1
        // if no of students more l=mid+1
        // if equal take the min

    }

    return r+1;
}