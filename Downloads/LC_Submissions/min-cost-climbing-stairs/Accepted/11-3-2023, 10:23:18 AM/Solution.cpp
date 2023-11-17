// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    vector<int>dp;
    int fxn(vector<int>cost,int ind){
        if(ind>=cost.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        int onestep= cost[ind]+fxn(cost,ind+1);
        int twostep= cost[ind]+fxn(cost,ind+2);
        return dp[ind]=min(onestep,twostep);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        dp.resize(cost.size(),-1);
        return  min(fxn(cost,0),fxn(cost,1));
    }
};