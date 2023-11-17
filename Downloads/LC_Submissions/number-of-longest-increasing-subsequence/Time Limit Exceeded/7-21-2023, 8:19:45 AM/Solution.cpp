// https://leetcode.com/problems/number-of-longest-increasing-subsequence

class Solution {
public:
    void fxn(vector<int>nums,vector<int>v,int mxm,int ind,int &cnt,int prev){
        if(ind>nums.size()-1){if(v.size()==mxm){cnt++;}return;}
        if(nums[ind]>prev){
            v.push_back(nums[ind]);
            fxn(nums,v,mxm,ind+1,cnt,nums[ind]);
            v.pop_back();
        }
         fxn(nums,v,mxm,ind+1,cnt,prev);
        
    }
    
    int findNumberOfLIS(vector<int>& nums) {    
        vector<int>dp(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]= max(dp[i],1+dp[j]);
                }
            }
        }
        int mxm=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(dp[i]>mxm)mxm=dp[i];
        }
    
        int cnt=0;
        for(int i=0;i<nums.size();i++)if(dp[i]==mxm)cnt++;
        
        vector<int>v;
        int c=0;
        fxn(nums,v,mxm,0,c,INT_MIN);
        return c;
    }
};