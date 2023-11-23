//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool isSafe(int newX, int newY, int n, vector<vector<int>> visited, vector<vector<int>> m){
        if((newX>=0 && newX<n) && (newY>=0 && newY<n) && 
        visited[newX][newY] == 0 && m[newX][newY] == 1 )
            return true;
        else
            return false;
    }
    
    void solve(vector<vector<int>> &m, int n, vector<string>& ans, string output,vector<vector<int>>& visited,
               int i, int j)
    {
        if(i == n-1 && j == n-1){
            ans.push_back(output);
            return;
        }
        
        visited[i][j] = 1;
        
        int newX = i+1;
        int newY = j;
        
        //down
        if(isSafe(newX, newY, n, visited, m)){
            output.push_back('D');
            solve(m,n,ans,output,visited, newX,newY);
            output.pop_back();
        }
        
        newX = i;
        newY = j+1;
        
        //right
        if(isSafe(newX, newY, n, visited, m)){
            output.push_back('R');
            solve(m,n,ans,output,visited, newX,newY);
            output.pop_back();
        }
        
        newX = i-1;
        newY = j;
        
        //up
        if(isSafe(newX, newY, n, visited, m)){
            output.push_back('U');
            solve(m,n,ans,output,visited, newX,newY);
            output.pop_back();
        }
        
        newX = i;
        newY = j-1;
        
        //Left
        if(isSafe(newX, newY, n, visited, m)){
            output.push_back('L');
            solve(m,n,ans,output,visited, newX,newY);
            output.pop_back();
        }
        
        visited[i][j] = 0;

    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0] == 0) return ans;
        vector<vector<int>> visited = m;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                visited[i][j] = 0;
        
        string output = "";
        solve(m, n, ans, output,visited, 0, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
