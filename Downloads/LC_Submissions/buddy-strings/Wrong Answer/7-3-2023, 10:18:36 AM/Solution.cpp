// https://leetcode.com/problems/buddy-strings

class Solution {
public:
    bool buddyStrings(string s, string g) {
        string a=s,b=g;
        if(s.length()==1||g.length()==1||s.length()!=g.length())return false;
        set<char>st(s.begin(),s.end());
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        if(a==b&&st.size()!=1)return false;
        if(s==g)return true;
        return false;
    }
};