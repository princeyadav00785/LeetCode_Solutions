// https://leetcode.com/problems/subsets

class Solution {
public:
   void fxn(vector<int>&nums,int ind,vector<int> v,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(v);
            return ;
        }
       // for(int i=ind;i<nums.size();i++){
       //     v.push_back(nums[i]);
       //     fxn(nums,i+1,v,ans);
       //     v.pop_back();
       // }
        v.push_back(nums[ind]);
           fxn(nums,ind+1,v,ans);
           v.pop_back();
                  fxn(nums,ind+1,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>v;
        vector<vector<int>>ans;
        fxn(nums,0,v,ans);
        return ans;
    }
};