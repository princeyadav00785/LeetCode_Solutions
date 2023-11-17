// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    // int fxn(vector<int>& cost, int i,int n){
    //     if(i<=0){
    //         return 0;
    //     }
    //     int one=0,two=0;
    //    if(i>0) one =fxn(cost,i-1,n);
    //     if(i>0)    two=fxn(cost,i-2,n);
    //     return min(cost[i-1]+one,cost[i-2]+two);
    // }
    
    int minCostClimbingStairs(vector<int>& cost) {
        // int n = cost.size();
        // return fxn(cost,n,n);
        
         int n=cost.size();
        for(int i=2;i<n;i++)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1],cost[n-2]);
    }
};