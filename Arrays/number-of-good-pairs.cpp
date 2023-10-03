class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int,int> mp; //value, noof numbers
        int count = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp[nums[i]]++;
            }
            else
            {
                count+=mp[nums[i]];
                mp[nums[i]]++;
            }
        }

        return count;
        
    }
};