// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
     vector<pair<char,int>>a;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
               a.push_back({s[i],i});
                s[i]='0';
            }
        }
        reverse(a.begin(),a.end());
       int p=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]=a[p++].first;
                
            }
            
        }
      return s;
        
    }
};