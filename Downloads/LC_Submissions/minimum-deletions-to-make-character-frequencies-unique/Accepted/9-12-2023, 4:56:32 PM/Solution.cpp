// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique

#include <string>
#include <unordered_set>
#include <vector>

class Solution {
public:
    int minDeletions(string s) {
        vector<int> charCount(26, 0);

        for (char ch : s) {
            charCount[ch - 'a']++;
        }

        unordered_set<int> set;
        int deletion = 0;

        for (int val : charCount) {
            while (val != 0 && set.count(val)) {
                val--;
                deletion++;
            }
            set.insert(val);
        }

        return deletion;
    }
};
