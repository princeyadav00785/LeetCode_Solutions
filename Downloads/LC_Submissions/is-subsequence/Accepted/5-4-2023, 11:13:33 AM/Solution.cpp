// https://leetcode.com/problems/is-subsequence

class Solution {
public:
   int lcs(string s,string t,int n,int m){
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
               if(s[i-1]==t[j-1]){
                   dp[i][j]=dp[i-1][j-1] +1;
               }else {
                   dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
        
        return dp[n][m];
    }
    bool isSubsequence(string s, string t) {
        int ans = lcs(s,t,s.size(),t.size());
        cout<<ans;
       if(s.size()== lcs(s,t,s.size(),t.size()) )
           return true;
        else return false;
    }
};