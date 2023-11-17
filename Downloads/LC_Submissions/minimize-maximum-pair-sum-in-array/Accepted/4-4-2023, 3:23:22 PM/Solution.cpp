// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int mxm=-99999,a=0;
        for(int i=0;i<nums.size()/2;i++){
            a=nums[i]+nums[nums.size()-i-1];
            mxm=max(mxm,a);
        }
        return mxm;
    }
};