// https://leetcode.com/problems/remove-all-occurrences-of-a-substring

#include <string>

class Solution {
public:
    string removeOccurrences(string s, string t) {
        while (s.find(t) != string::npos) {
            size_t pos = s.find(t);
            s.erase(pos, t.length());
        }
        return s;
    }
};
