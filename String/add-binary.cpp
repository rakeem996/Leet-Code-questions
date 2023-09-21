class Solution {
public:
    string addBinary(string a, string b) {
        
        int n = a.size()-1;
        int m = b.size()-1;
        string res = "";

        int carry = 0;

        while(n>=0 || m>=0)
        {
            int sum = carry;

            if(n>=0) sum += a[n--]-'0';
            if(m>=0) sum += b[m--]-'0';

            carry = sum>1 ? 1:0;

            res = to_string(sum%2) + res;
        }

        if(carry) res = '1'+res;

        return res;
        
    }
};