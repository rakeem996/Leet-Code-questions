//similar to the search element in rotated array just that we have to keep in mind a edge case of when mid ,left and right ele are same as we wont know which is the sorted array

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int l=0;
        int r=nums.size()-1;

        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] == target) return true;

            if(nums[mid] == nums[l] && nums[mid] == nums[r])
            {
                l++;
                r--;
            }
            else if(nums[l] <= nums[mid])
            {
                if(nums[l] <= target && target <= nums[mid]) r = mid - 1;
                else l = mid + 1;
            }
            else
            {
                if(nums[mid] <= target && target <= nums[r]) l = mid + 1;
                else r = mid - 1;
            }
        }

        return false;
    }
};