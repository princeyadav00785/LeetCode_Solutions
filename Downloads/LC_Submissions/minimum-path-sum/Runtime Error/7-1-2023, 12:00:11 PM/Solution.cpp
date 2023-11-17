// https://leetcode.com/problems/minimum-path-sum

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int n = grid.size();
        int m = grid[0].size();
        if(n==1){
            int sum=0;
            for(int i=0;i<m;i++){
                sum+=grid[0][i];
            }
            return sum;
        }
         if(m==1){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=grid[i][0];
            }
            return sum;
        }
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        dp[0][0]=grid[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int down = INT_MAX;
                int right= INT_MAX;
                if(i==0&&j==0)dp[i][j]=grid[0][0];
                else{
                if(i-1>-1){down =  dp[i-1][j];}
                if(j-1>-1)right= dp[i][j-1];
                dp[i][j]= grid[i][j]+ min(right,down);}
            }
            
        }
        return dp[n-1][m-1];
    }
};