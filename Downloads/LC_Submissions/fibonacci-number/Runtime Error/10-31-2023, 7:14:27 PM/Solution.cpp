// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fxn(vector<int>&dp,int n){
      if(dp[n]!=-1)return dp[n];
        
        else return dp[n]= fxn(dp,n-1)+fxn(dp,n-2);
    }
    int fib(int n) {
    vector<int>dp(n+1,-1);
        dp[1]=1,dp[0]=0;
       return fxn(dp,n);

       
    }
};