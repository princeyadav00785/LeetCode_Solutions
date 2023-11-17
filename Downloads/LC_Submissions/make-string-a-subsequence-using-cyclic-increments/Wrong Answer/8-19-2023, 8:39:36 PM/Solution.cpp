// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments

class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int m=0,n=0;
        while(n<t.length()){
            if(m==s.length()&&n<t.length())return false;
            if(s[m]==t[n]){
                m++;n++;
            }
            else if(s[m]=='z'&&t[n]=='a'){
                m++;n++;
            }else if(s[m]+1==t[n]){
                m++;n++;
            }
            else return m++;
            
        }
        return true;
    }
};