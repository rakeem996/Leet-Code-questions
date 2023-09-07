class Solution {
public:

    int findCount(vector<int>& nums, int n,int mid)
    {
        int count = 1;
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            if(sum > mid)
            {
                count++;
                sum = nums[i];
            }
        }

        return count;
    }

    int splitArray(vector<int>& nums, int k) {
        

        int n = nums.size();

        int l = INT_MIN;
        for(auto x: nums) l = max(l,x); //max element

        int r = 0;
        for(auto x:nums) r+=x; //sum of element

        while(l<=r)
        {
            int mid = (l+r)/2;

            int count = findCount(nums,n,mid);

            if(count <= k) r=mid-1;
            else l=mid+1;
        }

        return r+1;
    }
};