// https://leetcode.com/problems/lexicographically-smallest-string-after-substring-operation

class Solution {
public:
    string smallestString(string s) {
        int n=s.length(),ind=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]!='a'){
                 ind=i;
                break;
            }
           
        }
        int l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a')l=i;
        }
        for(int i=0;i<ind;i++){
            ans+='a';
        }
    if(l==0&&ind==0)
        {
        for(int i=ind;i<n;i++){
            if(s[i]=='z'){
                ans+='a';
            }else
            ans+= char( (int)s[i]-1);
        }}
        else if(ind==0&&l!=0){
              for(int i=ind;i<l;i++){
            if(s[i]=='z'){
                ans+='a';
            }else
            ans+= char( (int)s[i]-1);
        }
            if(l!=n-1)
       {     for(int i=l;i<n;i++){
                ans+=s[i];
            }}
        }else if(ind!=0&&l!=0&&ind!=l){
            for(int i=ind;i<=l;i++){
            if(s[i]=='z'){
                ans+='a';
            }else
            ans+= char( (int)s[i]-1);
        }
            if(l!=n-1)
       {     for(int i=l+1;i<n;i++){
                ans+=s[i];
            }}
        }else{
                        for(int i=ind;i<=l;i++){
            if(s[i]=='z'){
                ans+='a';
            }else
            ans+= char( (int)s[i]-1);
        }
            if(l!=n-1)
       {     for(int i=l+1;i<n;i++){
                ans+=s[i];
            }}
        }
        
        
        
        return ans;
    }
};