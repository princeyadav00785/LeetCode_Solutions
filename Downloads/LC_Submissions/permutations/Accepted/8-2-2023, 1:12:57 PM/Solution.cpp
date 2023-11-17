// https://leetcode.com/problems/permutations

class Solution {
public:
    void fxn( int ind, vector<int>&nums,vector<vector<int>>&ans){
        if(ind>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            fxn(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
        // return ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        fxn(0,nums,ans);
      return ans;        
    }
};