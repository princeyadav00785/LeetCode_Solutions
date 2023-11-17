// https://leetcode.com/problems/ways-to-express-an-integer-as-sum-of-powers

class Solution {
public:
    vector<long long int> v;

    int numberOfWays(int n, int x) {
        int i = 1, t = 1;
        while (t == 1) {
            long long int a = pow(i, x);
            if (a <= n) {
                v.push_back(a);
            } else {
                t = 0;
            }
            i++;
        }
        vector<vector<int>> dp(v.size() + 1, vector<int>(n + 1, 0));
        int mod = 1e9 + 7;

        for (int i = 0; i <= v.size(); i++) {
            for (int j = 0; j <= n; j++) {
                if (j == 0) {
                    dp[i][j] = 1; // Base case: there is one way to make sum 0 with no elements.
                } else if (i == 0) {
                    dp[i][j] = 0; // Base case: there are no elements to make a non-zero sum.
                } else {
                    dp[i][j] = dp[i - 1][j];
                    int remaining_sum = j - v[i - 1];
                    if (remaining_sum >= 0) {
                        dp[i][j] = (dp[i][j] + dp[i - 1][remaining_sum]) % mod;
                    }
                }
            }
        }

        return dp[v.size()][n];
    }
};
