// https://leetcode.com/problems/partition-equal-subset-sum

class Solution {
public:
 bool helper(int idx,int k,vector<int>arr,vector<vector<int>>&dp)
    {
        if(idx == arr.size())return k==0;
        if(k == 0)
        {
            return true;
        }
        if(dp[idx][k] != -1)return dp[idx][k];

        bool notpick = helper(idx + 1,k,arr,dp);
        bool pick = false;
        if(k>=arr[idx])
        {
            pick = helper(idx+1,k - arr[idx],arr,dp) ;
        }  
        return dp[idx][k] = pick | notpick;
    }

    bool canPartition(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int totalsum = accumulate(nums.begin(),nums.end(),0);
        if(totalsum%2)return false;
        vector<vector<int>>dp(nums.size(),vector<int>(totalsum+1,-1));
        return helper(0,totalsum/2,nums,dp);
    }
};