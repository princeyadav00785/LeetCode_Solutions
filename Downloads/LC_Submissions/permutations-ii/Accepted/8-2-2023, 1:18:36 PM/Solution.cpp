// https://leetcode.com/problems/permutations-ii

class Solution {
public:
    set<vector<int>>ans;
     vector<vector<int>>a;
    void fxn(vector<int>&nums,int ind){
        if(ind>=nums.size()){
            ans.insert(nums);
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            fxn(nums,ind+1);
            swap(nums[i],nums[ind]);
        }
        return ;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        fxn(nums,0);
        for(auto x:ans){
            a.push_back(x);
        }
        return a;
    }
};