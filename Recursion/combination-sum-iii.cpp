class Solution {
public:
    void solve(int i, vector<int> nums, int k, int n,vector<vector<int>>& ans, vector<int> ds) {

        if(n==0 && ds.size()==k) {
            ans.push_back(ds);
            return;
        }

        for(int j=i; j<nums.size(); j++) {
            if(j>i && nums[j] == nums[j-1]) continue;
            if(nums[j]>n) break;
            ds.push_back(nums[j]);
            if(ds.size()>k) break;
            solve(j+1, nums, k, n-nums[j], ans, ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> nums = {1,2,3,4,5,6,7,8,9};

        vector<vector<int>> ans;
        vector<int> ds;
        int i=0;
        solve(i,nums, k, n, ans, ds);

        return ans;

    }
};