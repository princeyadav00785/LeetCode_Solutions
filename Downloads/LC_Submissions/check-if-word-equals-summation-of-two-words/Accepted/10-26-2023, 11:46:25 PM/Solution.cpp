// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words

class Solution {
public:
    bool isSumEqual(string f, string s, string t) {
        string a="",b="",c="";
        for(int i=0;i<f.length();i++){
            int x= f[i]-'a';
            a+= to_string(x);
        }
    for(int i=0;i<s.length();i++){
            int x= s[i]-'a';
            b+= to_string(x);
        }
    for(int i=0;i<t.length();i++){
            int x= t[i]-'a';
            c+= to_string(x);
        }
    int m=stoi(a),n=stoi(b),l=stoi(c);
        return (m+n==l);
        
        
    }
};