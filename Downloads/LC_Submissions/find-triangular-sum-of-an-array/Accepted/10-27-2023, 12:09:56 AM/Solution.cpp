// https://leetcode.com/problems/find-triangular-sum-of-an-array

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        while(nums.size()>1){
            vector<int>v;
        for(int i=0;i<nums.size()-1;i++){
            int a= nums[i]+nums[i+1];
            v.push_back(a%10);
        }
            nums=v;
        }
        return nums[0];
    }
};