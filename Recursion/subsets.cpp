class Solution {
public:

    void solve(vector<vector<int>>& ans, vector<int> output, vector<int>& nums, int i)
    {
        if(i >= nums.size()){
            ans.push_back(output);
            return;
        }

        int ele = nums[i];

        //exclude
        solve(ans, output, nums, i+1);

        //include
        output.push_back(ele);
        solve(ans, output, nums, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;

        solve(ans, output, nums, 0);

        return ans;
    }
};