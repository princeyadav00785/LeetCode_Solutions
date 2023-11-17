// https://leetcode.com/problems/jump-game-ii

class Solution {
public:
    int n;
    int solve(int i, vector<int> &nums , vector<int>&dp)
    {
        if(i == n-1)  
            return 0;
       if(dp[i]!=-1)return dp[i];
        int mini = INT_MAX-1;                       
        for(int j=1; j<=min(n-1 - i, nums[i]); j++) 
        {
            int temp = 1 + solve(i+j, nums,dp); 
            mini = min(mini, temp);        
            dp[i]=mini;
        }
        
        return mini;  
    }
    
    int jump(vector<int>& nums) 
    {
        n = nums.size();
        vector<int>dp(n,-1);
        return solve(0, nums, dp);
    }
};