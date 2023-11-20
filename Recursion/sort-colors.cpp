class Solution {
public:
    int partition(vector<int>& nums,int p ,int q)
    {
        int r;
        
        int count = 0;
        for(int i=p+1; i<=q; i++) if(nums[i]<=nums[p]) count++;
        
        r = p+count;
        
        swap(nums[p], nums[r]);
        
        int i=p;
        int j=q;
        
        while(i<r && j>r)
        {
            if(nums[i] <= nums[r]){
                i++;
                continue;
            }
            
            if(nums[j] > nums[r]){
                j--;
                continue;
            }
            
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
        return r;
        
        
    }

    void quickSort(vector<int>& nums,int p ,int q)
    {
        
        if(p>=q) return ;
        
        int r = partition(nums, p,q);
        
        quickSort(nums, p,r-1);
        quickSort(nums, r+1, q);
    }

    void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
    }
};