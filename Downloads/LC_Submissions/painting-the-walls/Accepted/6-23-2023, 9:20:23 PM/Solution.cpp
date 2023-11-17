// https://leetcode.com/problems/painting-the-walls

class Solution {
public:
   int paintWalls(vector<int>& cost, vector<int>& time) {

        //TABULATION APPROACH
        int n = cost.size(); 
        vector<vector<int>> dp(n+1, vector<int>(n+1, 1e9));
        for(int i =0; i<=n; i++){
           dp[i][0] = 0;
        }
       for(int idx=1; idx<=n; idx++){
           for(int wallLeft = 1; wallLeft<=n; wallLeft++){
               int notTake = dp[idx-1][wallLeft];
               int take = cost[idx-1] + dp[idx-1][max(wallLeft - 1 - time[idx-1], 0)];
               dp[idx][wallLeft] = min(take, notTake);
           }
       }
        return dp[n][n];    
    }
};