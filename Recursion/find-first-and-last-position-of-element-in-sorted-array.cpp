class Solution {
public:
    int lower(vector<int>& nums,int x, int l, int r)
    {
        if(l>r) return  ((l>=0 && l< nums.size()) && nums[l] == x) ? l : -1;

        int mid = (l+r)/2;

        if(nums[mid] < x)
        {
            return lower(nums,x,mid+1,r);
        }else{
            return lower(nums,x,l,mid-1);
        }
    }
    int upper(vector<int> &nums,int x, int l, int r)
    {
        if(l>r) return ((l-1>=0 && l-1< nums.size()) && nums[l-1] == x) ? l-1 : -1;

        int mid = (l+r)/2;
        
        if(nums[mid] <= x)
        {
            return upper(nums,x,mid+1,r);
        }else{
            return upper(nums,x,l,mid-1);
        }

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        if(n == 0) return {-1,-1};

        int lower1 = lower(nums,target,0,n-1);

        int upper1 = upper(nums,target,0,n-1);

        return {lower1,upper1};
    }
};