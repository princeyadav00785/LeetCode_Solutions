// https://leetcode.com/problems/monotonic-array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int ans =0;
       for(int i=1;i<nums.size()-1;i++){
           if((nums[i]<=nums[i+1])&&(nums[i]>=nums[i-1])){
               ans =1;
           }
            if((nums[i]>=nums[i+1])&&(nums[i]<=nums[i-1])){
               ans =1;
           }
       }
        
       if(ans==0){
           return false ;
       }else return true;
    }
};