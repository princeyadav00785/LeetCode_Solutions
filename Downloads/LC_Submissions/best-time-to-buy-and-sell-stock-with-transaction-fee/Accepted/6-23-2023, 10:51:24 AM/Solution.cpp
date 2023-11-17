// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee

class Solution {
public:
     long fxn(vector<int>Arr,int n,int x){
    
vector<vector<long>> dp(n+1,vector<long>(2,-1));
    
    //base condition
    dp[n][0] = dp[n][1] = 0;
    
    long profit;
    
    for(int ind= n-1; ind>=0; ind--){
        for(int buy=0; buy<=1; buy++){
            if(buy==0){// We can buy the stock
                profit = max(0+dp[ind+1][0], -Arr[ind] + dp[ind+1][1]);
            }
    
            if(buy==1){// We can sell the stock
                profit = max(0+dp[ind+1][1], Arr[ind] + dp[ind+1][0]-x);
            }
            
            dp[ind][buy]  = profit;
        }
    }
    return dp[0][0];
    }
    int maxProfit(vector<int>& values, int fee) {
         int n= values.size();
    return fxn(values,n,fee);
    }
};