class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        vector<int> res;

        int i=0;
        while(i<nums1.size())
        {
            mp[nums1[i]] = 1;
            i++;
        }

        int j=0;
        while(j<nums2.size())
        {
            if(mp[nums2[j]] == 1)
            {
                res.push_back(nums2[j]);
                mp[nums2[j]]=0;
            }
            j++;
        }

        return res;
    }
};