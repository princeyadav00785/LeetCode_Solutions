// https://leetcode.com/problems/delete-operation-for-two-strings

class Solution {
public:
    
        int dp[1001][1001];
    int fxn(string s,string t,int n,int m){
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
               if(i==0||j==0){
                   dp[i][j]=0;
               } else {
                   if(s[i-1]==t[j-1]){
                       dp[i][j]=1+dp[i-1][j-1];
                   }else{
                       dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                   }
               }
            }
        }
        return dp[n][m];
    }
    
    int minDistance(string s, string t) {
        return s.length()+t.length()-2*fxn(s,t,s.length(),t.length());
    }
};