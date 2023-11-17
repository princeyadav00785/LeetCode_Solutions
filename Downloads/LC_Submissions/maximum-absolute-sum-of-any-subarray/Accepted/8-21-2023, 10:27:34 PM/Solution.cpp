// https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=-1e7,mxm=0;
        for(int i=0;i<nums.size();i++){
            sum = max(sum+nums[i],nums[i]);
            mxm = max(mxm,abs(sum));
        }
        sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = min(sum+nums[i],nums[i]);
            mxm = max(mxm,abs(sum));
        }
        return mxm;
    }
};