class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(( (n==INT_MIN) || (n & (n-1)) ) || n==0) return false;
        else return true;
    }
};