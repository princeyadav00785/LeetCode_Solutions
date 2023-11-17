// https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero

class Solution {
public:
    void dfs(int i, vector<int> &vis,vector<int> adj[],   map<pair<int,int>,int>&mp,int &cnt){
        vis[i]=1;
        
        for(auto x:adj[i]){
            if(!vis[x]){
                if(mp[{i,x}])cnt++;
                dfs(x,vis,adj,mp,cnt);
            }
        }
    }
    
    int minReorder(int n, vector<vector<int>>& c) {
        map<pair<int,int>,int>mp;
        for(auto x:c){
            pair<int,int>p;
            p= {x[0],x[1]};
            mp[p]++;
        }
        vector<int>adj[n];
        vector<int>vis (n,0);
        for(auto x:c){
            adj[x[0]].push_back(x[1]);
             adj[x[1]].push_back(x[0]);
        }
        int cnt=0;
        dfs(0,vis,adj,mp,cnt);
        
        
        return cnt;
    }
};