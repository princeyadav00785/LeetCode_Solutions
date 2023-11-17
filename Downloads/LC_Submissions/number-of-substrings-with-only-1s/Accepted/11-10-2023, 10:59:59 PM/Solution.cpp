// https://leetcode.com/problems/number-of-substrings-with-only-1s

class Solution {
public:
    int numSub(string s) {
                int ct=1,res=0;
        int mod = (int)(1e9+7);
        for(int i=0;i<s.size();i++){
            if(i>0 and s[i]==s[i-1] and s[i]=='1')  ct++;
            else if(s[i]=='1') ct=1;
            else ct=0;
            res = (res%mod+ct%mod)%mod;
        }
        return res;
    }
};