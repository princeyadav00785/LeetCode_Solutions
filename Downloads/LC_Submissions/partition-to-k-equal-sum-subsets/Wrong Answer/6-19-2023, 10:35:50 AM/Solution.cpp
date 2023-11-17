// https://leetcode.com/problems/partition-to-k-equal-sum-subsets

class Solution {
public:
     bool fxn(vector<int> nums,int s,int n,vector<vector<bool>>&dp){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(nums[i-1]<=j){
                    dp[i][j]= dp[i-1][j-nums[i-1]]||dp[i-1][j];
                }
                else dp[i][j]= dp[i-1][j];
                
            }
        }
        return dp[n][s];
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
             int s=0,n= nums.size();
        
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%k!=0)return false;
        vector<vector<bool>>dp(n+1,vector<bool>(s/k+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s/k;j++){
                if(i==0){dp[i][j]=false;}
                if(j==0){dp[i][j]=true;}
            }
        }
        return fxn(nums,s/k,n,dp);
    }
};