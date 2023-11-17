// https://leetcode.com/problems/regular-expression-matching

// class Solution {
// public:
//     bool isMatch(string s, string p) {
//         int m = s.size(), n = p.size();
//         vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
//         dp[0][0] = true;
//         for (int i = 0; i <= m; i++) {
//             for (int j = 1; j <= n; j++) {
//                 if (p[j - 1] == '*') {
//                     dp[i][j] = dp[i][j - 2] || (i && dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
//                 } else {
//                     dp[i][j] = i && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
//                 }
//             }
//         }
//         return dp[m][n];
//     }
// };
// And you may further reduce the memory usage down to two vectors (O(n)).

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<bool> pre(n + 1, false), cur(n + 1, false);
        cur[0] = true;
        for (int i = 0; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (p[j - 1] == '*') {
                    cur[j] = cur[j - 2] || (i && pre[j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
                } else {
                    cur[j] = i && pre[j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
                }
            }
            fill(pre.begin(), pre.end(), false);
			swap(pre, cur);
        }
        return pre[n];
    }
};