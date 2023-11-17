// https://leetcode.com/problems/add-strings

class Solution {
public:
   long long   fxn(string s){
        int n = s.length();
       long long   ans=0,i=0;
        while(n--){
            int  a= s[i++]-'0';
            ans= ans*10+a;
        }
        return ans;
    }
    string addStrings(string s, string t) {
     long long   a=0,b=0;
       a= fxn(s);
        b=fxn(t);
        a=a+b;
        string ans= to_string(a);
        return ans;
        
    }
};