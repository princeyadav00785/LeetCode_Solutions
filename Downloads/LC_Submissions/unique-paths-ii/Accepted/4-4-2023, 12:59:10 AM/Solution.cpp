// https://leetcode.com/problems/unique-paths-ii

class Solution {
public:
//     int uniquePathsWithObstacles(vector<vector<int>>& v) {
//         int n=v.size(),m=v[0].size();
        
//         int dp[n][m];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(i==0&&j==0){
//                     dp[i][j]=1;
//                 }
//                 if(v[i][j]==-1){
//                     dp[i][j]=0;
//                 }
//                 else {
//                     int up=0,right=0;
//                   if(i>0)   up= dp[i-1][j];
//                   if(j>0)   right=dp[i][j-1];
//                     dp[i][j]=up+right;
                    
//                 }
//             }
//         }
//         return dp[n-1][m-1];
        
         int ans(int i, int j, vector<vector<int>> &dp, vector<vector<int>>& obstacleGrid){
        if(i>=0 && j>=0 && obstacleGrid[i][j]==1) return 0;
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=ans(i-1, j, dp, obstacleGrid);
        int left=ans(i, j-1, dp, obstacleGrid);
        return dp[i][j]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return ans(m-1, n-1, dp, obstacleGrid);
    }
};