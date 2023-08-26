class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int l=0;
        int r=n-1;

        if(n == 1) return nums[0];
        if(nums[l] != nums[l+1]) return nums[l];
        if(nums[r] != nums[r-1]) return nums[r];

        l++;
        r--;

        while(l<=r)
        {
            int mid = (l+r)/2;

            if((nums[mid] != nums[mid+1]) && (nums[mid] != nums[mid-1]))
            {
                return nums[mid];
            }

            if((mid%2 == 0 && nums[mid] == nums[mid+1] ) || (mid%2 == 1) && nums[mid] == nums[mid-1])
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