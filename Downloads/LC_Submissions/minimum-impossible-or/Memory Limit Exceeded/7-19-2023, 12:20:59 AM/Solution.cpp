// https://leetcode.com/problems/minimum-impossible-or

class Solution {
public:
      void fxn(vector<int>&nums,int ind,vector<int>v,vector<int>&a){
        if(ind==nums.size()){
            int ans=0;
            for(auto x:v){
                ans= ans|x;
            }
            a.push_back(ans);
            return;
        }
        v.push_back(nums[ind]);
        fxn(nums,ind+1,v,a);
        v.pop_back();
        fxn(nums,ind+1,v,a);
    }
    int minImpossibleOR(vector<int>& nums) {
                vector<int>v;
        vector<int>a;
        fxn(nums,0,v,a);
    sort(a.begin(),a.end());
        int k=1;
        for(int i=0;i<a.size();i++){
            if(a[i]==k)k++;
        }
        return k;
    }
};