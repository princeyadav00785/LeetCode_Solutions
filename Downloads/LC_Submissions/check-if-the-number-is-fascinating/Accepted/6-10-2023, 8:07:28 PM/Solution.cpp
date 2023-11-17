// https://leetcode.com/problems/check-if-the-number-is-fascinating

class Solution {
public:
    bool isFascinating(int n) {
        int a=2*n;
        int b=3*n;
        string m=to_string(n);
         string w=to_string(a);
         string l=to_string(b);
        string s=m+w+l;
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        
        if(s.length()!=9)return false;
        for(int i=1;i<10;i++){
            string m= to_string(i);
            if(!mp[m[0]])return false;
        }
        return true;
    }
};