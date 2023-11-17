// https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful

class Solution {
public:
    int minChanges(string s) {
          int n = s.size();
    int changes = 0;

    for (int i = 0; i < n; i += 2) {
        // Check for the first type of substring: "00...00" or "11...11"
        if (s[i] != s[i + 1]) {
            // Need to change one character to make it beautiful
            changes++;
        }
    }

    return changes;
    }
};