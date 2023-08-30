class Solution {
public:

    int maxBloomDay(vector<int>& bloomDay, int n)
    {
        int mx = INT_MIN;
        for(auto x: bloomDay) mx = max(mx,x);
        return mx;
    }

    int minBloomDay(vector<int>& bloomDay, int n)
    {
        int mi = INT_MAX;
        for(auto x: bloomDay) mi = min(mi,x);
        return mi;
    }

    int completeBouquets(vector<int>& bloom, int mid, int n,int k)
    {
        vector<int> v = bloom;
        for(int i=0; i<n; i++)
        {
            if(v[i] <= mid)
            {
                v[i] = 0;
            }
        }

        int b = 0;
        int counter = 0;
        for(int i=0;i<n; i++)
        {
            if(v[i] == 0)
            {
                counter++;
            }
            else
            {
                counter = 0;
            }

            if(counter == k)
            {
                counter = 0;
                b++;
            }
        }

        return b;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long n = bloomDay.size();

        long long temp = fmul(m,k);
        if(n < temp) return -1;

        int r = maxBloomDay(bloomDay,n);

        int l = minBloomDay(bloomDay,n);

        int cb;
        
        while(l<=r)
        {
            int mid = (l+r)/2;

            cb = completeBouquets(bloomDay,mid,n,k);

            if(cb >= m) r = mid-1;
            else l = mid+1;

        }

        return l;
    }
};