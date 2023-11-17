// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    long long  fxn(string s, string t, int n, int m){
        vector<vector<long long >>dp(n+1,vector<long long >(m+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               if(s[i-1]==t[j-1]){
               dp[i][j]= dp[i-1][j-1]+dp[i-1][j];        
               }  else dp[i][j]= dp[i-1][j];
            }     
        }
        return dp[n][m];
    }
    int numDistinct(string s, string t) {
        
        long long int  ans = fxn(s,t,s.size(),t.size());
        return ans;
    }
};