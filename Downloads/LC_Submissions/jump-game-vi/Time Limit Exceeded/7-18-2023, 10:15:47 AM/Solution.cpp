// https://leetcode.com/problems/jump-game-vi

class Solution {
public:
    int fxn(vector<int>&nums,int k,int ind){
        if(ind>nums.size()-1)return 0;
        int mxm =INT_MIN;
        for(int i=1;i<=k;i++){
            int a= nums[ind]+ fxn(nums,k,ind+i);
            mxm=max(a,mxm);
        }
        return mxm;
    }
    
    int maxResult(vector<int>& nums, int k) {
        return  fxn(nums,k,0);
    }
};