class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int f = 0,s = 0;
        int n = nums.size();
        int count = 0;

        for(auto x: nums) if(x == val) count++;

        while(s<n && f<n)
        {
            if(nums[f] != val)
            {
                f++;
                continue;
            }

            if(s < f) s = f; 

            if(nums[s] == val)
            {
                s++;
                continue;
            }

            swap(nums[f],nums[s]);
            f++;
        }

        return n-count;

        
    }
};