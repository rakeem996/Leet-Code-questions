class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = s.size();

        if(s == goal) return true;
        
        for(int i=0; i<n; i++)
        {
            if(s.substr(n-i-1,i+1)+s.substr(0,n-i-1) == goal) return true;
        }

        return false;
    }
};