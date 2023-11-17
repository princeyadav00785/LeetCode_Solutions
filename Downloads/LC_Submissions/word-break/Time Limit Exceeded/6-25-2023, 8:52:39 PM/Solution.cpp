// https://leetcode.com/problems/word-break

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        return isWordBreak(s, wordSet);
    }
    
    bool isWordBreak(string s, unordered_set<string>& wordSet) {
        if (s.empty())
            return true;
        
        for (int i = 1; i <= s.length(); i++) {
            string prefix = s.substr(0, i);
            if (wordSet.count(prefix) && isWordBreak(s.substr(i), wordSet))
                return true;
        }
        
        return false;
    }
};
