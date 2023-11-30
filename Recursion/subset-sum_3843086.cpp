
void solve(vector<int> num, vector<int>& ans, int sum, int i) {
	//base
	if(i>=num.size()) {
		ans.push_back(sum);
		return;
	}

	solve(num, ans, sum, i+1);

	solve(num, ans,sum+num[i], i+1);
}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	vector<int> ans;

	int sum = 0;

	solve(num, ans, sum, 0);

	sort(ans.begin(), ans.end());

	return ans;	
}