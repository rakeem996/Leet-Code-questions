class Solution {
public:

    int findCeil(vector<int>& nums,int target)
    {
        int check = 0;
        int ans = -1;
        int l = 0;
        int r = nums.size()-1;

        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] <= target)
            {
                ans = mid;
                l = mid+1;
                if(nums[mid] == target) check = 1;
            }
            else
            {
                r = mid-1;
            }
        }
        return check?ans:-1;
    }

    int findFloor(vector<int>& nums,int target)
    {
        int ans = -1;
        int l = 0;
        int r = nums.size()-1;
        int check = 0;

        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] >= target)
            {
                ans = mid;
                r = mid-1;
                if(nums[mid] == target) check = 1;
            }
            else
            {
                l = mid+1;
            }
        }

        return check?ans:-1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int ceil = findCeil(nums,target);
        int floor = findFloor(nums,target);
        if(ceil == -1 || floor == -1) return {-1,-1};
        return {floor,ceil};


    }
};