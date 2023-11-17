// https://leetcode.com/problems/is-graph-bipartite

class Solution {
public:
    bool dfs(vector<int> adj[], int i, int color[], int col) {
        color[i] = col;

        for (auto it : adj[i]) {
            if (color[it] == -1) {
                if (dfs(adj, it, color, !col) == false)
                    return false;
            } else {
                if (color[it] == col) {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& adjj) {
        int V = adjj.size();
        vector<int> adj[V];
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < adjj[i].size(); j++) {
                adj[i].push_back(adjj[i][j]);
            }
        }
        int colors[V];
        for (int i = 0; i < V; i++)
            colors[i] = -1;
        for (int i = 0; i < V; i++) {
            if (colors[i] == -1) {
                if (dfs(adj, i, colors, 0) == false)
                    return false;
            }
        }
        return true;
    }
};
