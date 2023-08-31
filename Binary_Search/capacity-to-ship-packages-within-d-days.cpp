class Solution {
public:

    int findSum(vector<int>& weights)
    {
        int sum = 0;
        for(auto x: weights) sum+=x;

        return sum;
    }

    int findMax(vector<int>& weights)
    {
        int mi = INT_MIN;
        for(auto x: weights) mi = max(x,mi);

        return mi;
    }

    int findDays(vector<int>& weights,int m, int cap)
    {
        int days = 1;
        int load = 0;
        int n = weights.size();
        for (int i = 0; i < n; i++) {
            if (load + weights[i] > cap) {
                days += 1; 
                load = weights[i]; 
            }
            else {
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();

        int r = findSum(weights);

        int l = findMax(weights);

        if(days == 1) return findSum(weights);

        while(l<=r)
        {
            int mid = (l+r)/2;

            int minDays = findDays(weights,n,mid);

            if(minDays > days)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }

        return l;
    }
};