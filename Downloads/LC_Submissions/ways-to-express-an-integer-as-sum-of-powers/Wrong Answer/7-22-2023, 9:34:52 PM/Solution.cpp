// https://leetcode.com/problems/ways-to-express-an-integer-as-sum-of-powers

// class Solution {
// public:
//     vector<long long int>v;
    
// //     void fxn(int n,int &cnt,int ind,int sum){
// //         if(ind>v.size()-1){
// //             if(sum==0){cnt++;}
// //             return ;
// //         }
// //     if(v[ind]<=sum){
// //         fxn(n,cnt,ind+1,sum-v[ind]);
// //         fxn(n,cnt,ind+1,sum);
// //     }
// //         else fxn(n,cnt,ind+1,sum);
// //     }
    
    
//     int numberOfWays(int n, int x) {
//         int i=1,t=1;
//     while(t==1){
//         long long int a=pow(i,x);
//         if(a<=n){
//             v.push_back(a);
//         }else{t=0;}
//         i++;
//     }    
//         vector<vector<int>>dp(v.size()+1,vector<int>(n+1,0));
//         for(int i=0;i<=v.size();i++){
//             for(int j=0;j<=n;j++){
//                 if(j==0||i==0){dp[i][j]= 0;}
                
                
//                 else{
//                     if(v[i-1]<=j){
//                         dp[i][j]=max(dp[i-1][j],1+ dp[i-1][j-v[i-1]]);
//                     }else dp[i][j]= dp[i-1][j];
//                 }
//             }
//         }
//         int cnt=0;
//         // fxn(n,cnt,0,n);
//         return dp[v.size()][n];
//     }
// };


class Solution {
public:
    int numberOfWays(int n, int x) {
        const int mod = 1e9 + 7;
        vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= x; j++) {
                for (int k = 1; k <= i; k++) {
                    int power = pow(k, x);
                    if (power > i) break;
                    dp[i][j] = (dp[i][j] + dp[i - power][j - 1]) % mod;
                }
            }
        }

        return dp[n][x];
    }
};

