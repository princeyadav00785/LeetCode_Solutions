// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));
        
        // If t is an empty string, there is exactly one subsequence in s (empty string)
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i-1] == t[j-1]) {
                    // If the characters match, we have two choices:
                    // 1. Include the current character in both s and t, and count the subsequence
                    // 2. Exclude the current character from s, and count the subsequence
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                } else {
                    // If the characters don't match, we can only exclude the current character from s
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][m];
    }
};
