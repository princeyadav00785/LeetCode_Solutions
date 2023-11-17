// https://leetcode.com/problems/is-graph-bipartite

class Solution {
public:
    bool bfs(vector<int> adj[], int i, int color[], int col) {
        color[i] = col;
        queue<pair<int, int>> q;
        q.push({i, col});
        while (!q.empty()) {
            int node = q.front().first;
            int clr = q.front().second;
            q.pop();
            for (auto it : adj[node]) {
                if (color[it] == -1) {
                    color[it] = !clr;
                    q.push({it, !clr});
                } else {
                    if (color[it] == clr)
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
                if (bfs(adj, i, colors, 0) == false)
                    return false;
            }
        }
        return true;
    }
};
