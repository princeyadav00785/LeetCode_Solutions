// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii

class Solution {
public:
    int fxn(  vector<vector<vector<int>>>&dp,vector<int>values,int n,int ind,int buy,int cap){
        if(ind==n||cap==0)return 0;
        long long profit =0;
        if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
        if(buy){
            profit = max(-values[ind]+fxn(dp,values,n,ind+1,0,cap),fxn(dp,values,n,ind+1,1,cap));
        }else 
      profit = max(values[ind]+fxn(dp,values,n,ind+1,1,cap-1),fxn(dp,values,n,ind+1,0,cap));
        return dp[ind][buy][cap]= profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return fxn(dp,prices,n,0,1,2);
    }
};