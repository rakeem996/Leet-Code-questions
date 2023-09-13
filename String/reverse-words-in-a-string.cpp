class Solution {
public:
    string reverseWords(string s) {
        
        int start = 0;
        int end = s.length()-1;

        string ans = "";
        string temp = "";

        while(start <= end)
        {
          char v = s[start];
          if(v != ' ')
          {
            temp+=v;
          }
          else if( v == ' ' && temp != "")
          {
            if(ans != "") ans = temp + " " + ans;
            else ans = temp;

            temp = "";
          }

          start++;
        }

        if(temp != "")
        {
          if(ans != "") ans = temp + ' ' + ans;
          else ans = temp;
        }

        return ans;


    }
};