// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0,maxi=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>0){
                sum=sum+nums[i];
            }else sum=0;
            maxi= max(sum,maxi);
        }
        
        return maxi;
    }
};