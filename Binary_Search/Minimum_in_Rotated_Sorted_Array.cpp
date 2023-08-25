class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = nums.size()-1;
        int mid;
        while(l<=r)
        {
            mid = (l+r)/2;

            if(mid+1<n && mid-1>=0 && nums[mid + 1] >= nums[mid] && nums[mid - 1] >= nums[mid])
            {
                return nums[mid];
            }
            

            if(nums[mid] > nums[r]) l = mid+1;
            else r = mid-1;

        }
        
        return nums[mid];
    }
};