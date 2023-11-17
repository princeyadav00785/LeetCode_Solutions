// https://leetcode.com/problems/monotonic-array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int a=0,b=0;
       for(int i=1;i<nums.size()-1;i++){
           if((nums[i]>nums[i+1])){
            a=1;
           }
            if((nums[i]>nums[i-1])){
          b=1;
           }
       }
        
       if(a==1&&b==1){
           return false ;
       }else return true;
    }
};