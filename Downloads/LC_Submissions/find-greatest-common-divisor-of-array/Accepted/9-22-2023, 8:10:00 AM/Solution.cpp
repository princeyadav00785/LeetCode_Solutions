// https://leetcode.com/problems/find-greatest-common-divisor-of-array

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mnm=INT_MAX,mxm=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxm)mxm=nums[i];
            if(nums[i]<mnm)mnm=nums[i];
        }
        return __gcd(mnm,mxm);
    }
};