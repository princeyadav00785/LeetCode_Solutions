// https://leetcode.com/problems/count-number-of-homogenous-substrings

class Solution {
public:
    int countHomogenous(string s) {
          int ct=1,res=0;
        int mod = (int)(1e9+7);
        for(int i=0;i<s.size();i++){
            if(i>0 and s[i]==s[i-1] )  ct++;
            else  ct=1;
            // else ct=0;
            res = (res%mod+ct%mod)%mod;
        }
        return res;
    }
};