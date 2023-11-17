// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    // int tribonacci(int n) {
    //     // int arr[n+2];
    //     vector<int> arr(n+2);
    //     arr[0]=0;
    //     arr[1]=1;
    //     arr[2]=1;
    //     for(int i=3;i<=n;i++){
    //         arr[i]= arr[i-1]+arr[i-2]+arr[i-3];
    //     }
    //     return arr[n];
           int memoized(int n, vector<int> &dp){
        if(n < 2)           return n;
        if(n == 2)          return 1;
        if(dp[n] != -1)     return dp[n];
        return dp[n] = memoized(n-1, dp) + memoized(n-2, dp) + memoized(n-3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        return memoized(n, dp);

    }
};