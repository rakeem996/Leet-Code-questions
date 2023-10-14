class Solution {
public:

    vector<int> getRow(int rowIndex) {
        
        vector<int> res;

        long long factor = 1;
        int i=0;
        while(i<=rowIndex)
        {
            res.push_back(factor);
            factor = factor * (rowIndex-i)/(i+1);
            i++;
        }

        return res;
    }
};