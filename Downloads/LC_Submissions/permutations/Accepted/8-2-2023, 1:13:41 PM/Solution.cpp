// https://leetcode.com/problems/permutations

class Solution {
public:
       vector<vector<int>>ans;
    void fxn( int ind, vector<int>&nums){
        if(ind>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            fxn(ind+1,nums);
            swap(nums[ind],nums[i]);
        }
        return ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
     
        fxn(0,nums);
      return ans;        
    }
};