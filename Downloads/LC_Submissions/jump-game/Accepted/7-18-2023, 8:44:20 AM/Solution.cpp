// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool fxn(vector<int>&nums,int i,vector<int>&dp){
        if(i==nums.size()-1){return true;}
        if(nums[i]==0)return false;
        if(dp[i]!=-1)return dp[i];
        for(int j=1;j<=nums[i];j++){
           if(j<nums.size()&&fxn(nums,j+i,dp))
            return dp[i]= true;
            
        }
        return dp[i]=false;
    }
    
    bool canJump(vector<int>& nums) {
       
        vector<int>dp(nums.size(),-1);
         return fxn(nums,0,dp);
    }
};

