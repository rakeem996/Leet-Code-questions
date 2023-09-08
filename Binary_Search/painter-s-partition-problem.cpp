int findCount(vector<int> &boards, int n,int mid)
{
    int count = 1;

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum+=boards[i];

        if(sum > mid)
        {
            count++;
            sum=boards[i];
        }
    }

    return count;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n = boards.size();

    int l = 0; //max of elements
    for(auto x: boards) l=max(l,x);

    int r = 0; //sum of all elements

    for(auto x: boards) r+=x;

    while(l<=r)
    {
        int mid = (l+r)/2;

        int count = findCount(boards,n,mid);

        if(count > k) l=mid+1;
        else r=mid-1;
    }

    return r+1;
}