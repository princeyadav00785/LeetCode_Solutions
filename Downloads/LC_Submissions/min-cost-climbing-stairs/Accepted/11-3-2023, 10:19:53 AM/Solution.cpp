// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    vector<int> memo;
    
    int fxn(vector<int>& cost, int ind) {
        if (ind >= cost.size()) return 0;
        
        if (memo[ind] != -1) return memo[ind];
        
        int oneStep = cost[ind] + fxn(cost, ind + 1);
        int twoSteps = cost[ind] + fxn(cost, ind + 2);
        
        memo[ind] = min(oneStep, twoSteps);
        return memo[ind];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        memo.assign(n, -1);
        
        return min(fxn(cost, 0), fxn(cost, 1));
    }
};
