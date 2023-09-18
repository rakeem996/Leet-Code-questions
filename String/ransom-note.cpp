class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> count;
        for(int i=0; i<100; i++)
        {
            count.push_back(0);
        }

        for(int i=0; i<magazine.size(); i++)
        {
            int temp = magazine[i]-'0';
            count[temp]++;
        }

        for(int i=0; i<ransomNote.size(); i++)
        {
            int temp = ransomNote[i] - '0';
            if(count[temp] == 0) return false;
            count[temp]--;
        }

        return true;

    }

};