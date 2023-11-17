// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
public:
    
    long fxn(vector<int>values, int n,int buy,int ind,vector<vector<int>>&dp){
    if(ind==n)return 0;
    long  profit=0;
    if(dp[ind][buy]!=-1)return dp[ind][buy];
if(buy){
  long  int a = -values[ind]+ fxn(values,n,0,ind+1,dp);
    long int b= fxn(values,n,1,ind+1,dp);
   profit=max(a,b);
}else{
   long  int c= values[ind]+fxn(values,n,1,ind+1,dp);
    long int d= fxn(values,n,0,ind+1,dp);
       profit= max(c,d);
}
return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& values) {
        int n= values.size();
         vector<vector<int>>dp(n+1,vector<int>(2,-1));
    return fxn(values,n,1,0,dp);
    }
};