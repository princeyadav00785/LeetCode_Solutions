// https://leetcode.com/problems/word-break

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        unordered_map<string, bool> memo;
        return isWordBreak(s, wordSet, memo);
    }
    
    bool isWordBreak(string s, unordered_set<string>& wordSet, unordered_map<string, bool>& memo) {
        if (s.empty())
            return true;
        
        if (memo.count(s))
            return memo[s];
        
        for (int i = 1; i <= s.length(); i++) {
            string prefix = s.substr(0, i);
            if (wordSet.count(prefix) && isWordBreak(s.substr(i), wordSet, memo)) {
                memo[s] = true;
                return true;
            }
        }
        
        memo[s] = false;
        return false;
    }
};
