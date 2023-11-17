// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
        map<char,int>mp;
        int n=s.length();
        int cnt=0, i=0;
        while(n--){
            if(mp['L']==mp['R']!=0){
                cnt++;
                mp.clear();
                }
            mp[s[i++]]++;
        }
        return cnt;
    }
};