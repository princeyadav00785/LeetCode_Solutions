// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+2;
       vector<int> adj[n]; 
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
             adj[x[1]].push_back(x[0]);
        }
        int i=0;
        for(auto x: adj){
            if(x.size()==n-2)return i;
            i++;
        }
        return 0;
    }
};