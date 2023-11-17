// https://leetcode.com/problems/maximum-69-number

class Solution {
public:
    int maximum69Number (int num) {
        int flag=0;
        string s= to_string(num);
        for(int i=0;i<s.length();i++){
            if(s[i]=='6'&&flag==0){
                s[i]='9';
                flag=1;
            }
        }
        int ans= 0,n= s.length()-1;
       for(int i=0;i<s.length();i++){
           ans+=(s[i]-'0')*(pow(10,n));
           n--;
       }
        return ans;
    }
};