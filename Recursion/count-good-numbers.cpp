class Solution {
public:
    int MOD = 1e9+7;
    long long power(long long n, long long k)
    {
        if(k == 0) return 1;
        if(k == 1) return n;

        int temp = (n*n)%MOD;

        if(k%2==0)
        {
            return power(temp,k/2);
        }
        else
        {
            return (n*power(temp,k/2))%MOD;
        }

    }
    int countGoodNumbers(long long n) {
        
        //4 -> 5 * 4 * 5 * 4
        //5 -> 5 * 4 * 5 * 4 * 5
        //no.of even places = n/2 + n%2;
        //no.of odd places = n/2;
        //pow(5,even) * pow(4,odd);

        long even = n-n/2;
        long odd = n/2;

        return (power(5,even) * power(4,odd))%MOD;
    }
};