class Solution {
public:

    void solve(vector<int>& candidates, int target,vector<vector<int>>& ans, vector<int> output,int i) {

        if(target == 0) {
            ans.push_back(output);
            return;
        }

        for(int j=i;j<candidates.size(); j++) {

            if(candidates[j] > target) break;
            if(j>i && candidates[j] == candidates[j-1]) continue;

            output.push_back(candidates[j]);
            solve(candidates, target-candidates[j], ans, output, j+1);
            output.pop_back();
        }
        

        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> output;
        sort(candidates.begin(), candidates.end());
        solve( candidates, target, ans, output, 0);

        return ans;
    }
};