// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rec(vector<int> nums,int i,vector<int>& dp){
        if(i>=nums.size()){return 0;}
        if(dp[i]!=-1)return dp[i];
        else
        {return dp[i]= max({rec(nums,i+1,dp), nums[i]+rec(nums,i+2,dp)});}
    }
    
    int rob(vector<int>& nums) {
       // int flag =0,sum=0,index=0,n=nums.size();
       //  fxn(nums,sum,n,flag);
        // return sum; 
        vector<int>dp(nums.size()+1,-1);
      return rec(nums,0,dp);
        
    }
};