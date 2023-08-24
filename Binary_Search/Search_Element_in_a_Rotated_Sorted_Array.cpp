class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l = 0;
        int r = nums.size()-1;

        //here we are first checking which is part of the arr is sorted and then if in that sorted part is the target element present or not.

        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] == target) return mid;
            else if(nums[l] <= nums[mid]){ // checking if this is sorted part or not
                if(nums[l] <= target && target <= nums[mid]){
                    //if the element exist in this pool
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[r]){
                    //if the element exist in this pool
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }

        return -1;
    }
};