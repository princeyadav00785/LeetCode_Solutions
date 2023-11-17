// https://leetcode.com/problems/permutation-sequence

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
    string getPermutation(int n, int k) {
        vector<int>nums(n,0);
        for(int i=0;i<n;i++)nums[i]=i+1;
        fxn(0,nums);
        sort(ans.begin(),ans.end());
        string s="";
        vector<int>a= ans[k-1];
        for(int i=0;i<a.size();i++){
            // cout<<a[i];
           string t = to_string(a[i]);
            s=s+t;
        }
      return s;   
    }
};