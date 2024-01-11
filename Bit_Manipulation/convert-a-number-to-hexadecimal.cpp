class Solution {
public:
    string toHex(int num) {
        
        //for pos
        if(num == 0) return "0";
        string hex = "0123456789abcdef";
        string ans = "";
        int count = 0;
            while(num && count<8) {
                int rem = num%16;
                ans=hex[rem & 0xf]+ans;
                num = num >> 4;
                count++;
            }

        return ans;
    }
};