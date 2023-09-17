class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char> temp1;
        unordered_map<char,char> temp2;
        // unordered map to store and search for the elements
        // we will use two of them to do it
        
        for(int i=0; i<s.size(); i++)
        {
            char curr1 = s[i];
            char curr2 = t[i];

            //for string s
            if(temp1.find(curr1) == temp1.end()) //we couldn't find it
            {
                temp1[curr1] = curr2;
            }
            else
            {
                //if we find it
                if(temp1[curr1] != curr2) return false;
            }

            //for string t
            if(temp2.find(curr2) == temp2.end()) //we couldn't find it
            {
                temp2[curr2] = curr1;
            }
            else
            {
                //if we find it
                if(temp2[curr2] != curr1) return false;
            }
        }


        return true;


    }
};