// https://leetcode.com/problems/path-with-maximum-probability

class Solution {
public:
    void fxn(int n, vector<pair<int, double>> adj[], int s, vector<double>& dis, vector<int>& vis){
        vis[s] = 1;
        for(auto x : adj[s]){
            int node = x.first;
            double prob = x.second;
            if(dis[node] < dis[s] * prob){ // Updated the condition here
                dis[node] = dis[s] * prob;
                if(!vis[node])
                    fxn(n, adj, node, dis, vis);
            }
        }
    }
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int, double>> adj[n];
        int a = edges.size();
        int b = edges[0].size();
        for(int i = 0; i < a; i++){
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        vector<double> dis(n, 0);
        vector<int> vis(n, 0);
        dis[start] = 1.0; // Set the starting node distance to 1.0
       
        fxn(n, adj, start, dis, vis);
        
        return dis[end];
    }
};
