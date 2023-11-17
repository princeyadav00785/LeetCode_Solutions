// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
      vector<int>dp(n,1);
        int maxi=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            maxi=max(maxi,dp[i]);
        }
        if(maxi>=3)return true;
        return false;
        
    }
};