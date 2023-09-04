
int noOfCows(vector<int> &stalls,int n, int mid)
{

    int count = 1;
    int l = stalls[0];
    for(int i=1; i<n; i++)
    {
        int r = stalls[i];
        int diff = r-l; //pos diff

        if(diff >= mid)
        {
            count++;
            l = stalls[i];
        }


    }

    return count;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.

    sort(stalls.begin(), stalls.end());

    int n = stalls.size();

    int l = 1;

    int r = stalls[n-1] - stalls[0];

    while(l<=r)
    {
        int mid = (l+r)/2;

        int count = noOfCows(stalls, n, mid);

        if(count < k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return r;
}