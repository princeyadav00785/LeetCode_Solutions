// https://leetcode.com/problems/maximal-network-rank

class Solution {
public:
    int mxm=0;
    void fxn(vector<int>adj[],int V,vector<int> &vis,vector<int>&dfs,int i,int a){
       
        
        vis[i]=1;
        a++;
        mxm=max(a,mxm);
        // dfs.push_back(i);
        for(auto x:adj[i]){
            if(!vis[x]){
                fxn(adj,V,vis,dfs,x,a);
            }
        }
    }

    int maximalNetworkRank(int n, vector<vector<int>>& nums) {
        vector<int>dfs;
        // int vis[V]={0};
        vector<int>adj[n];
        int V=n;
        for(auto x:nums){
            adj[x[0]].push_back(x[1]);
             adj[x[1]].push_back(x[0]);
            
        }
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i])
            fxn(adj,V,vis,dfs,i,1);
        }
        return mxm;
        // return dfs;

    }
};