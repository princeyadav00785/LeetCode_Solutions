// https://leetcode.com/problems/number-of-matching-subsequences

class Solution {
public:
    int lcs (string s,string t, int n,int m){
        vector<vector<int>>dp(n+1,vector<int> (m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else 
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            if(lcs(s,words[i],s.size(),words[i].size())==words[i].size()){cnt++;}
        }
        return cnt;
    }
};