// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
public:
    int fxn(int ind,int prevind,int n,vector<int>&nums,        vector<vector<int>>&dp){
        if(ind ==n)return 0;
        if(dp[ind][prevind+1]!=-1)return dp[ind][prevind+1];
        int take=0;
            int ntake=0;
        ntake= fxn(ind+1,prevind,n,nums,dp);
        if(prevind==-1||nums[ind]>nums[prevind]){
            take= 1+fxn(ind+1,ind,n,nums,dp);
        }
        return dp[ind][prevind+1] =max(take,ntake);
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return fxn(0,-1,nums.size(),nums,dp);
    }
};