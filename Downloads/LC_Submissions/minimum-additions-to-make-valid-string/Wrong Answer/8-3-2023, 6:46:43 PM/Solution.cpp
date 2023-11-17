// https://leetcode.com/problems/minimum-additions-to-make-valid-string

class Solution {
public:
    int fxn(string t,string s,int m,int n,vector<vector<int>>&dp){
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }else{
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    
    int addMinimum(string w) {
        string s="abc";
        string t="";
        map<char,int>mp;
        for(int i=0;i<w.length();i++){
            mp[w[i]]++;
        }
        int mxm=0;
        for(auto x:mp){
            if(x.second>mxm)mxm=x.second;
        }
        for(int i=0;i<mxm;i++){
            t+=s;
        }
        
        vector<vector<int>>dp(w.size()+1,vector<int>(t.size()+1,0));
       int a= fxn(t,w,w.size(),t.size(),dp);
        return 3*mxm-a;
    }
};