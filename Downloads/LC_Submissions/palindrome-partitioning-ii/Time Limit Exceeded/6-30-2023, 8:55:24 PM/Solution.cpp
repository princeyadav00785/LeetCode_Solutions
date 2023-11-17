// https://leetcode.com/problems/palindrome-partitioning-ii

#include <string>
#include <vector>
#include <climits>

class Solution {
public:
    int fxn(std::string s, int i, int j, std::vector<std::vector<int>>& dp) {
        if (i >= j) {
            return 0;
        }
        if (ispalindrome(s, i, j)) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int mnm = INT_MAX;
        for (int k = i; k <= j - 1; k++) {
            int temp = fxn(s, i, k, dp) + fxn(s, k + 1, j, dp) + 1;
            if (temp < mnm) {
                mnm = temp;
            }
        }
        return dp[i][j] = mnm;
    }

    bool ispalindrome(std::string s, int i, int j) {
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    int minCut(std::string s) {
        int i = 0, j = s.size() - 1;
        int n = s.size();
        std::vector<std::vector<int>> dp(n, std::vector<int>(n, -1));
        return fxn(s, i, j, dp);
    }
};
