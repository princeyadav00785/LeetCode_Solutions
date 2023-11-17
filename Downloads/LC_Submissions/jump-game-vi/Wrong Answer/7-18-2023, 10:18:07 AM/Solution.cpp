// https://leetcode.com/problems/jump-game-vi

class Solution {
public:
    int fxn(vector<int>&nums,int k,int ind,vector<int>&dp){
        if(ind>nums.size()-1)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int mxm =INT_MIN;
        for(int i=1;i<=k;i++){
            int a= nums[ind]+ fxn(nums,k,ind+i,dp);
            mxm=max(a,mxm);
            dp[ind]=mxm;
        }
        return mxm;
    }
    
    int maxResult(vector<int>& nums, int k) {
        vector<int>dp(nums.size(),-1);
        return  fxn(nums,k,0,dp);
    }
};