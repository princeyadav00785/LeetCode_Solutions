// https://leetcode.com/problems/greatest-common-divisor-of-strings

class Solution {
public:
    string gcdOfStrings(string s, string t) {
     
        int n=s.length(),m=t.length();
        int x=min(n,m);
        string ans="";
        while(x>0){
            if(n%x==0&&m%x==0){
                int a=n/x,b=m/x;
                string aa="";
                for(int i=0;i<x;i++)aa+=s[i];
                string bb="",cc="";
                for(int i=0;i<a;i++)bb+=aa;
                for(int i=0;i<b;i++)cc+=aa;
                if(bb==s&&cc==t){
                    ans=aa;
                    break;
                }
            }
            x--;
        }
            
            
            return ans;
    }
};