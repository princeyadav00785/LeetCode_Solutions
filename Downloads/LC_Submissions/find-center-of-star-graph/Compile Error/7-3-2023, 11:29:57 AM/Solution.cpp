// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
          return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];

    }
};