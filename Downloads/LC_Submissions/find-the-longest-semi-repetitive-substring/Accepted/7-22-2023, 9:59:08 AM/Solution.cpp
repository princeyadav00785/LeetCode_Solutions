// https://leetcode.com/problems/find-the-longest-semi-repetitive-substring

class Solution {
public:
    int fxn(int c,string s){
        int a=0;
        int cnt=0;
        int b=0,m=c,l=0;
        for(int i=c;i<s.length()-1;i++){
        
         if(s[i]==s[i+1])
         {
             a++;
                         }
            if(a>1){l=i+1; break;}
            
        }
        if(l==0){l=s.length();}
        cnt= l-m;
        return cnt;
    }
    int longestSemiRepetitiveSubstring(string s) {
        int mxm=-1,ans=-1;
     for(int i=0;i<s.length();i++){
         mxm = fxn(i,s);
         ans = max(mxm,ans);
     }
        return ans;
    }
};

// 1 1 1 