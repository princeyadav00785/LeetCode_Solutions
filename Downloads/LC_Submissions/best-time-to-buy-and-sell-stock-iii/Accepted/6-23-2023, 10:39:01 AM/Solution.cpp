// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii

class Solution {
public:
    int fxn( vector<int>Arr,int n){
      vector<vector<vector<int>>> dp(n+1,
                                    vector<vector<int>> 
                                            (2,vector<int>(3,0)));
         for(int ind = n-1; ind>=0; ind--){
        for(int buy = 0; buy<=1; buy++){
            for(int cap=1; cap<=2; cap++){
                
                if(buy==0){// We can buy the stock
                    dp[ind][buy][cap] = max(0+dp[ind+1][0][cap], 
                                -Arr[ind] + dp[ind+1][1][cap]);
                 }
    
                if(buy==1){// We can sell the stock
                    dp[ind][buy][cap] = max(0+dp[ind+1][1][cap],
                                Arr[ind] + dp[ind+1][0][cap-1]);
                }
            }
        }
    }
        return dp[0][0][2];
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
  
        return fxn(prices,n);
    }
};