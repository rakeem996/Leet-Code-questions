int floorSqrt(int n)
{
    if(n==1 || n==0) return n;
    int l=2;
    int r=n;

    int mid;
    while(l<r)
    {
        mid=(r+l)/2;

        if(mid*mid > n) r=mid;
        else l=mid+1;
    }

    return l-1;
}
