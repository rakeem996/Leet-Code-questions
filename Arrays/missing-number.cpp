class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //usign hashing we create a hash array and then increment to 1 if the element is present
        //treaverse for the number usign loop
        
        vector<int> hash(nums.size()+1,0);

        for(auto x: nums) hash[x]++;

        for(int i=0; i<hash.size()+1; i++)
        {
            if(hash[i] == 0) return i;
        }

        return -1;
    }
};