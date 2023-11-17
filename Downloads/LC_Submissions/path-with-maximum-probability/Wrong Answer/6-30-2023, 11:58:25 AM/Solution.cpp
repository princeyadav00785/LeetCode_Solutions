// https://leetcode.com/problems/path-with-maximum-probability

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <limits>

using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> adj(n);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double p = succProb[i];
            adj[u].push_back({v, p});
            adj[v].push_back({u, p});
        }
        
        vector<double> prob(n, 0.0);
        prob[start] = 1.0;
        
        vector<bool> visited(n, false);
        visited[start] = true;
        
        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start});
        
        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            double currProb = curr.first;
            int currNode = curr.second;
            
            if (currNode == end) {
                return currProb;
            }
            
            if (currProb < prob[currNode]) {
                continue;
            }
            
            for (auto neighbor : adj[currNode]) {
                int nextNode = neighbor.first;
                double edgeProb = neighbor.second;
                
                double newProb = currProb * edgeProb;
                if (newProb > prob[nextNode]) {
                    prob[nextNode] = newProb;
                    if (!visited[nextNode]) {
                        pq.push({newProb, nextNode});
                        visited[nextNode] = true;
                    }
                }
            }
        }
        
        return 0.0;
    }
};
