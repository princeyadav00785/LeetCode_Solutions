// https://leetcode.com/problems/steps-to-make-array-non-decreasing

class Solution {
public:
    int totalSteps(vector<int>& nums) {
     int a= nums[0],x=0,index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
               
                x=max(x,i-index);
                     index=i;
            }
        }
        return x-1;
    }
};