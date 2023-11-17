// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes

class Solution {
public:
    void dfs(int i,vector<int>adj[],vector<int>&vis){

        vis[i]=1;
        for(auto x:adj[i]){
            if(!vis[x])
            dfs(x,adj,vis);
        }
    }
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int>vis(n,0);
        vector<int>adj[n];
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans.push_back(i);
                dfs(i,adj,vis);
            }
        }
        return ans;
    }
};