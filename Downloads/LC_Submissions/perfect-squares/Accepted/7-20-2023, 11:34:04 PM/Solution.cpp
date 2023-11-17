// https://leetcode.com/problems/perfect-squares

class Solution {
public:
    int fxn(int n, vector<int>&dp){
        if(n<0)return INT_MAX;
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int mnm =n;
        for(int i=1;i*i<=n;i++){
        mnm=min(mnm,fxn(n-(i*i),dp)); 
        }
        dp[n]=mnm+1;
        return mnm+1;
    }
    
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return fxn(n,dp);
    }
};


//     int numSquares(int n){
//         int arr[]=new int[n+1];
//         return helper(n,arr);
//     }
    
//     public : int helper(int n,int arr[]){
//         if(n<0) return Integer.MAX_VALUE;  //Taking min later on
//         if(n==0) return 0;
        
//         if(arr[n]>0) return arr[n];
        
//         int min=n;
        
//         for(int i=1;i*i<=n;i++){
//             min=Math.min(min,helper(n-(i*i),arr));
//         }
//         arr[n]=min+1;
//         return min+1;
//     }
// };
