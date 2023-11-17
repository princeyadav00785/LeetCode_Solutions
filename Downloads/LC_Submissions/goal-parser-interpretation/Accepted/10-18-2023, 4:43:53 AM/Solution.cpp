// https://leetcode.com/problems/goal-parser-interpretation

class Solution {
public:
    string interpret(string c) {
        int n=c.length();
        string ans="";
     for(int i=0;i<c.length();i++){
         if(c[i]=='G'){
             string a= "G";
             ans+=a;
         }
         else if(c[i]=='('&&c[i+1]==')'){
             string a= "o";
             i++;
             ans+=a;
         }else  if(c[i]=='('&&c[i+1]=='a'){
             string a="al";
             i=i+3;
             ans+=a;
         }
     }   
        return ans;
    }
};