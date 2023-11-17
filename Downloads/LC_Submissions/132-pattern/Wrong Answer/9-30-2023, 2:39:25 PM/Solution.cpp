// https://leetcode.com/problems/132-pattern

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       vector<int>v;
         vector<int>t;
        int mxm=INT_MAX;
        for(int i=0;i<nums.size();i++){
            v.push_back(mxm);
            if(nums[i]<mxm)mxm=nums[i];
        }
        mxm=INT_MIN;
       for(int i=nums.size()-1;i>-1;i--){
             t.push_back(mxm);
            if(nums[i]>mxm)mxm=nums[i];
       }
        reverse(t.begin(),t.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        //  for(int i=0;i<nums.size();i++){
        //     cout<<t[i]<<" ";
        // }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>v[i]&&nums[i]>t[i]&&t[i]>v[i]){
                cout<<nums[i];
                return true;
            }
        }
        return false;
    }
};