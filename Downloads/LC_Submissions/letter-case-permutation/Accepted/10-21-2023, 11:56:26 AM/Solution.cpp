// https://leetcode.com/problems/letter-case-permutation

#include <vector>
#include <string>

class Solution {
public:
    void fxn(vector<string>& ans, string s, int index, string t) {
        if (index >= s.length()) {
            ans.push_back(t);
            return;
        }

        if (isalpha(s[index])) {
            string temp = s;
            s[index] = toupper(s[index]);
            t += s[index];
            fxn(ans, s, index + 1, t);

            s[index] = tolower(s[index]);
            t.pop_back(); // Remove the last character
            t += s[index];
            fxn(ans, s, index + 1, t);

            s = temp; // Restore the original string
        }
        else {
            t += s[index];
            fxn(ans, s, index + 1, t);
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string t = "";
        fxn(ans, s, 0, t);
        return ans;
    }
};
