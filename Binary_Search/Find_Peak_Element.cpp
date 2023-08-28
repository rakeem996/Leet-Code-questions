class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        int l=0;
        int r=n-1;

        if(n==1 || nums[0]>nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;
        
        l++;
        r--;

        while(l<=r){
            int mid = (l+r)/2;

            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) return mid;

            if(nums[mid-1] < nums[mid])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }

        return -1;
    }
};