class Solution {
public:

    long long helper(vector<int>& nums, int mid)
    {
        long long sum = 0;
        for(auto x: nums)
        {
            sum += (x+mid-1)/mid;
        }

        return sum;
    }

    long long solve(vector<int>& nums, int h, int l, int r)
    {
        if(l>r) return l;

        long long mid = (l+r)/2;

        long long  n = helper(nums, mid);//number of hours for mid

        if(n <= h) return solve(nums, h, l, mid-1);
        else return solve(nums, h, mid+1, r);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int mx = INT_MIN;
        for(auto x: piles) mx = max(mx,x);
        return solve(piles,h,1,mx);
    }
};