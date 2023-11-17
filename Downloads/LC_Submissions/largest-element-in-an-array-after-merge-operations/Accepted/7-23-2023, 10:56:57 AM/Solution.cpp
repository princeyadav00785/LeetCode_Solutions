// https://leetcode.com/problems/largest-element-in-an-array-after-merge-operations

class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
    long long int sum=0,mxm=0;
        for(int i=nums.size()-1;i>-1;i--){
            sum+=nums[i];
         if(i!=0) {  if(sum<nums[i-1]){
                sum=0;
            }}
            mxm=max(sum,mxm);
        }
        return mxm;
    }
};