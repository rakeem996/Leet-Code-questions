class Solution {
public:
    int solve(vector<int>& nums, int x, int l, int r)
    {
        if(l>r) return l;

        int mid = (l+r)/2;

        if(nums[mid] == x) return mid;
        else if(nums[mid] < x){
            return solve(nums,x,mid+1,r);
        }else{
            return solve(nums,x,l,mid-1);
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums[0] > target) return 0;
        if(nums[nums.size()-1] < target) return nums.size();
        return solve(nums,target,0,nums.size()-1);
    }
};