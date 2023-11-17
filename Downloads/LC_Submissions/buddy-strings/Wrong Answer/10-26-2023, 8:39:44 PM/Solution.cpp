// https://leetcode.com/problems/buddy-strings

class Solution {
public:
    bool buddyStrings(string s, string g) {
       int cnt=0;
           if(s.length()!=g.length())return false;
        map<char,int>mp;
         map<char,int>mp2;
        for(int i=0;i<s.length();i++ ){
            mp[s[i]]++;
            mp2[g[i]]++;
        }
        if(mp!=mp2)return false;
        for(auto x:mp)if(x.second>1)return true;
     
        for(int i=0;i<s.length();i++){
            if(s[i]!=g[i])cnt++;
        }
        if(cnt==2)return true;
        return false;
    }
};