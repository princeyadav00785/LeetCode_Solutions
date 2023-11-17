// https://leetcode.com/problems/subsets-ii

class Solution {
public:
       void fxn(vector<int>&nums,int ind,vector<int> v,set<vector<int>>&ans){
        if(ind==nums.size()){
            ans.insert(v);
            return ;
        }
        v.push_back(nums[ind]);
        fxn(nums,ind+1,v,ans);
        v.pop_back();
        fxn(nums,ind+1,v,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
                vector<int>v;
        
        set<vector<int>>ans;
        fxn(nums,0,v,ans);
        vector<vector<int>>a;
        for(auto x: ans)a.push_back(x);
        return a;
    }
};



