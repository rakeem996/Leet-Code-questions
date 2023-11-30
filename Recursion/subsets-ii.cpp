class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, vector<int> ds, int i) {
        if(i>=nums.size()) {
            // ans.push_back(ds);
            return;
        }

        for(int j=i; j<nums.size(); j++) {
            if(j>i && nums[j] == nums[j-1]) continue;
            ds.push_back(nums[j]);
            ans.push_back(ds);
            solve(nums, ans, ds, j+1);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;

        vector<int> ds;

        sort(nums.begin(), nums.end());

        solve(nums, ans, ds, 0);
        ans.push_back({});
        return ans;
    }
};