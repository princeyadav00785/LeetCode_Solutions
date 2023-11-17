// https://leetcode.com/problems/sum-of-beauty-in-the-array

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int a=0 ,b=0;
        int ans =0;
           for(int i=0;i<nums.size()-1;i++){
         if(nums[i+1]>nums[i]){
           a=2;

         }if(nums[i+1]<nums[i]){
           b=1;
         }
     }
     
     if(a==2&&b==0){
         ans =2;
     }else if(a==0&&b==1){
         ans =0;
     }else ans =1;

 return ans;
    }
};