// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii

class Solution {
public:
     long fxn(vector<int>values, int n,int buy,int ind,vector<vector<int>>&dp,int c){
    if(ind==n)return 0;
         if(c==0)return 0;
    long  profit=0;
    if(dp[ind][buy]!=-1)return dp[ind][buy];
if(buy){
  long  int a = -values[ind]+ fxn(values,n,0,ind+1,dp, c);
    long int b= fxn(values,n,1,ind+1,dp,c);
   profit=max(a,b);
}else{
   long  int c= values[ind]+fxn(values,n,1,ind+1,dp,c-1);
    long int d= fxn(values,n,0,ind+1,dp,c);
       profit= max(c,d);
}
return dp[ind][buy]=profit;
    }
    
    int maxProfit(vector<int>& values) {
                int n= values.size();
         vector<vector<int>>dp(n+1,vector<int>(2,-1));
    return fxn(values,n,1,0,dp,2);
    }
};