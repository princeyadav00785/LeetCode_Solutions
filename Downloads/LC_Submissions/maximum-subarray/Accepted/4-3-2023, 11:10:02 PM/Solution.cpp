// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int fxn(vector<int>& nums, int i,int n,int sum,int &ans){
        
        if(i==n){
            return sum;
        }
        
        ans= max(fxn(nums,i+1,n,sum+nums[i],ans),fxn(nums,i+1,n,0,ans));
        
        return ans;
    }

    int maxSubArray(vector<int>& nums) {
        
         vector<int> dp(nums);
        for(int i = 1; i < size(nums); i++) 
            dp[i] = max(nums[i], nums[i] + dp[i-1]);        
        return *max_element(begin(dp), end(dp));
        
        
        // int index=0,n=nums.size(),sum=0,ans=0;
        // fxn(nums,index,n,sum,ans);
        // return ans;
    }
};