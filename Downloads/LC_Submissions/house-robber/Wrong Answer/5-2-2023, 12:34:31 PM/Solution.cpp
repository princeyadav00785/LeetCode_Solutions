// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {
        // vector<int > dp(nums.size(),-1);
        // dp[0]=nums[0];
        int prev2 = nums[0];
        if(nums.size()==1)return nums[0];
        int prev=max(nums[0],nums[1]);
        int  curr=0;
        for(int i=2;i<nums.size();i++){
            curr = max(prev,nums[i]+prev2);
            prev2 = prev;
            prev= curr;
        }
        return curr;
    }
};