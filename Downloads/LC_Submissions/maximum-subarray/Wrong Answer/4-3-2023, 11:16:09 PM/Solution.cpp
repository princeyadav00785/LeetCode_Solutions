// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
            if(sum<0){
                sum=0;
            }
            maxsum= max(maxsum,sum);
        }
        return maxsum;
    }
};