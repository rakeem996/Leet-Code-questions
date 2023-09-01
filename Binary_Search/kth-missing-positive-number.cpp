class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();
        int count = 0; //will count the number of misses
        int ans = 1;
        int i=0;
        while(i<n)
        {
            if(count == k) break;

            if(ans != arr[i])
            {
                count++;
                ans++;
                continue;
            }

            ans+=1;
            i++;
        }

        if(count != k)
        {
            ans += k-count;
        }

        return ans-1;
    }
};