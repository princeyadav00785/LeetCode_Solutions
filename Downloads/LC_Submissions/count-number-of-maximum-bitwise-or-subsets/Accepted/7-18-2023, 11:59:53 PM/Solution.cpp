// https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets

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
    
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int>v;
        vector<int>a;
        fxn(nums,0,v,a);
        int mxm=INT_MIN;
        for(int i=0;i<a.size();i++){
            if(a[i]>mxm)mxm= a[i];
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){if(a[i]==mxm)cnt++;}
        return cnt;
    }
};