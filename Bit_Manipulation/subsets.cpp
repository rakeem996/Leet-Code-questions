class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        //number of total sets = 2^n;

        int totalSets = pow(2, n);

        vector<vector<int>> ans;

        //loop from 0->totalSets
        for(int i=0; i<totalSets; i++) {
            vector<int> df;
            for(int j=0; j<n; j++) {
                if( (1<<j) & i ) df.push_back(nums[j]);
            }
            ans.push_back(df);
        }

        return ans;
    }
};