// https://leetcode.com/problems/palindrome-partitioning-ii

#include <string>
#include <vector>
#include <climits>

class Solution {
public:
    int minCut(std::string s) {
        int n = s.size();
        std::vector<std::vector<bool>> isPalindrome(n, std::vector<bool>(n, false));
        std::vector<int> dp(n, INT_MAX);

        // Pre-calculate whether substrings are palindromes
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (s[i] == s[j] && (i - j <= 1 || isPalindrome[j + 1][i - 1])) {
                    isPalindrome[j][i] = true;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (isPalindrome[0][i]) {
                dp[i] = 0; // No cuts needed if the entire substring is a palindrome
            }
            else {
                for (int j = 0; j < i; j++) {
                    if (isPalindrome[j + 1][i]) {
                        dp[i] = std::min(dp[i], dp[j] + 1);
                    }
                }
            }
        }

        return dp[n - 1];
    }
};
