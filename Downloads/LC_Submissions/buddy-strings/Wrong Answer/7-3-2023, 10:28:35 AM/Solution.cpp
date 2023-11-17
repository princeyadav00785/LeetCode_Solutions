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
         if(a==b&&st.size()==1)return true;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(a[i]!=b[i])cnt++;
        }
        if(s==g&&cnt==2)return true;
        return false;
    }
};