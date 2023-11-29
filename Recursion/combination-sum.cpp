class Solution {
private:
    void solve(vector<int> nums, int target, vector<vector<int>>& ans, vector<int> output, int i, int sum)
    {
        if(i>=nums.size() || sum >= target) {
            if(sum == target) {
                ans.push_back(output);
                return;
            } else {
                return;
            }
        }

        output.push_back(nums[i]);
        sum+=nums[i];

        solve(nums, target, ans, output, i, sum);

        output.pop_back();
        sum-=nums[i];
        
        solve(nums, target, ans, output, i+1, sum);
        // solve(nums, target, ans, output, i, sum);


    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> output;

        solve(candidates, target, ans, output, 0, 0);

        return ans;
    }
};