// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii

class Solution {
public:
    long getAns(vector<int> Arr, int n, int buy, int ind, int cap) {
//         if (ind == n || c == 0) {
//             return 0;
//         }
        
//         long profit = 0;
        
//         if (buy) {
//             long a = -values[ind] + fxn(values, n, 0, ind + 1, c);
//             long b = fxn(values, n, 1, ind + 1, c);
//             profit = max(a, b);
//         } else {
//             long c = values[ind] + fxn(values, n, 1, ind + 1, c - 1);
//             long d = fxn(values, n, 0, ind + 1, c);
//             profit = max(c, d);
//         }
        
//         return profit;
            if(ind==n || cap==0) return 0; //base case
    
    // if(dp[ind][buy][cap]!=-1)
    //     return dp[ind][buy][cap];
        
    int profit;
    
    if(buy==0){// We can buy the stock
        profit = max(0+getAns(Arr,n,ind+1,0,cap), 
                    -Arr[ind] + getAns(Arr,n,ind+1,1,cap));
    }
    
    if(buy==1){// We can sell the stock
        profit = max(0+getAns(Arr,n,ind+1,1,cap),
                    Arr[ind] + getAns(Arr,n,ind+1,0,cap-1));
    }
    
    return  profit;

    }
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        return getAns(prices, n, 0, 0, 2);
    }
};
