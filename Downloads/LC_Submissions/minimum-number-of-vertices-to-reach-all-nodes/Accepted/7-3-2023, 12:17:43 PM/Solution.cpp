// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int >indegree(n,0);
        for(auto x:edges){
            indegree[x[1]]++;
        }
        int i=0;
        for(auto x:indegree){if(x==0)ans.push_back(i);i++;}
        return ans;
    }
};