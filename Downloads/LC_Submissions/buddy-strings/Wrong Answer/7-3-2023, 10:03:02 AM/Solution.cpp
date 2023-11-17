// https://leetcode.com/problems/buddy-strings

class Solution {
public:
    bool buddyStrings(string s, string g) {
        if(s==g)return true;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        if(s==g)return true;
        return false;
    }
};