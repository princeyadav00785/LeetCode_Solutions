// https://leetcode.com/problems/longest-string-chain

class Solution {
public:
    bool isPredecessor(const string& s1, const string& s2) {
        if (s1.size() != s2.size() + 1)
            return false;
        
        int i = 0, j = 0;
        int mismatch = 0;
        
        while (i < s1.size() && j < s2.size()) {
            if (s1[i] == s2[j]) {
                i++;
                j++;
            } else {
                mismatch++;
                i++;
            }
            
            if (mismatch > 1)
                return false;
        }
        
        return true;
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.size() < b.size();
        });
        
        int n = words.size();
        vector<int> dp(n, 1);
        int maxLength = 1;
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (isPredecessor(words[i], words[j]))
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            
            maxLength = max(maxLength, dp[i]);
        }
        
        return maxLength;
    }
};
