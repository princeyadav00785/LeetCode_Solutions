// https://leetcode.com/problems/jump-game-ii

class Solution {
public:
      void fxn(vector<int>&nums,int i,vector<int>&ans,int cnt){
        if(i==nums.size()-1){ans.push_back(cnt);return ;}
        if(nums[i]==0){ans.push_back(INT_MAX);return ;}
        
        for(int j=1;j<=nums[i];j++){
            if(j<nums.size())
           fxn(nums,j+i,ans,cnt+1);
        }
        return;
    }
    
    
    int jump(vector<int>& nums) {
        vector<int>ans;
        vector<int>dp(nums.size(),-1);
          fxn(nums,0,ans,0);
        int a=INT_MAX;
        for(int i=0;i<ans.size();i++){
            if(ans[i]<a)a=ans[i];
        }
        return a;
    }
};