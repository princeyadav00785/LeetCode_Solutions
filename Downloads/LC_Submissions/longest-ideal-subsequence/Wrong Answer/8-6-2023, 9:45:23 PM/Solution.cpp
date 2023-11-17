// https://leetcode.com/problems/longest-ideal-subsequence

class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int>dp(s.length(),1);
        int mxm=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<i;j++){
                if(s[j]-s[i]<=k){
                    dp[i]=dp[j]+1;
                    mxm=max(mxm,dp[i]);
                }
            }
        }
        return mxm;
    }
};