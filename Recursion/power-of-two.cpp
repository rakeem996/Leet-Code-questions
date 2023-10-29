class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //when is it true;
        if(n==1) return true;
        if(n%2 == 1 || n<=0) return false;

        return isPowerOfTwo(n/2);
    }
};