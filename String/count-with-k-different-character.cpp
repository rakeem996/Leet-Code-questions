#include<bits/stdc++.h>

int countSubStrings(string s, int k) 

{

    int ans=0;

    for(int i=0,j=k-1;j<s.size();i++,j++){

        vector<int> v(26,0);

        int count=0;

        for(int l=i;l<s.size();l++){

            if(v[s[l]-'a']==0){

                count++;

            }

            v[s[l]-'a']++;

            if(count==k){

                ans++;

            }

            else if(count>k){

                break;

            }

        }

    }

    return ans;

}