// https://leetcode.com/problems/partition-equal-subset-sum

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
    bool canPartition(vector<int>& nums) {
     int s=0,n= nums.size();
        
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%2!=0)return false;
        // bool dp[n][s/2];
        vector<vector<bool>>dp(n+1,vector<bool>(s/2+1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s/2;j++){
                if(i==0){dp[i][j]=false;}
                if(j==0){dp[i][j]=true;}
            }
        }
        return fxn(nums,s/2,n,dp);
    }
};