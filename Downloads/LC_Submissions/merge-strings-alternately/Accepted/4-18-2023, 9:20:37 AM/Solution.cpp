// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string s, string t) {
        string ans="";
        int a=0,b=0;
        for(int i=0;i<s.length()+t.length();i++){
            if(a<s.length()){
               ans=ans+ s[a]; }
            
        if(b<t.length()){
          ans=ans+t[b];  }
        a++;
        b++;}
        return ans;
    }
};