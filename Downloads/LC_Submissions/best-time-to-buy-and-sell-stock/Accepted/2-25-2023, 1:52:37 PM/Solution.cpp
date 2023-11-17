// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a= prices[0];
        int profit=0;
        int ans =0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>a){
                profit=prices[i]-a;
              
            }else   a= prices[i];
            ans = max(profit ,ans);
        }
        return ans;
    }
};