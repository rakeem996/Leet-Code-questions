class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xr = start^goal;
        int flips = 0;
        while(xr) {
            if(xr%2==1) flips++;
            xr = xr>>1;
        }

        return flips;
    }
};