// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        int a=0;
        int b=s.length();
        for(int i=0;i<=s.length();i++){
        if(s[i]=='I'){
            v.push_back(a++);
        }else v.push_back(b--);
        }
        return v;
    }
};