// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    int fxn(string s, string t, int n, int m) {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int mod = 1e9 + 7;
        
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        
        return dp[n][m];
    }
    
    int numDistinct(string s, string t) {
        int ans = fxn(s, t, s.size(), t.size());
        return ans;
    }
};
