class Solution {
public:

    int findMax(vector<int>& nums, int n)
    {
        int mx = INT_MIN;

        for(auto x:nums) mx = max(x,mx);

        return mx;
    }

    int findMin(vector<int>& nums, int n)
    {
        int mi = INT_MAX;

        for(auto x:nums) mi = min(x,mi);

        return mi;
    }

    int currentThreshold(vector<int>& nums,int n,int mid)
    {
        int sumOfD = 0;
        for(int i=0; i<n; i++)
        {
            sumOfD += ceil((double)nums[i]/(double)mid);
        }

        return sumOfD;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size();

        int r = findMax(nums,n);

        int l = 1;

        while(l<=r)
        {
            int mid = (l+r)/2;

            int ct = currentThreshold(nums,n,mid); //ceil

            if(ct > threshold) l = mid+1;
            else r = mid-1;
        }

        return l;
    }
};