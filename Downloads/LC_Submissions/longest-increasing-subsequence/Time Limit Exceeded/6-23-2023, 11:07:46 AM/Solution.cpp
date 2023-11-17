// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
public:
    int fxn(int ind,int prevind,int n,vector<int>&nums){
        if(ind ==n)return 0;
        int take=0;
            int ntake=0;
        ntake= fxn(ind+1,prevind,n,nums);
        if(prevind==-1||nums[ind]>nums[prevind]){
            take= 1+fxn(ind+1,ind,n,nums);
        }
        return max(take,ntake);
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        return fxn(0,-1,nums.size(),nums);
    }
};