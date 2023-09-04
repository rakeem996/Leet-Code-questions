class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        int carry = 1;
        for(int i=n-1; i>=0; i--)
        {
            int curr = digits[i] + carry;

            carry = curr / 10;

            digits[i] = curr % 10;
        }

        if(carry) digits.insert(digits.begin(),carry);

        return digits;
    }
};