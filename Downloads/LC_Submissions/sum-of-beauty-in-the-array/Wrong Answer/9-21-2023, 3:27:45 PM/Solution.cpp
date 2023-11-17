// https://leetcode.com/problems/sum-of-beauty-in-the-array

class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        
        if(nums.size()==3){
            
            if(nums[1]>nums[0]&&nums[1]<nums[2])return 2;
            return 0;
        }
        else{
            vector<int>v=nums;
        sort(v.begin(),v.end());
       
        if(v==nums)return 2;
            
        for(int i=1;i<nums.size()-2;i++){
            if(nums[i]>nums[i-1]&&nums[i]<nums[i+1]){
                
            }else return 0;
        }
        return 1;
        }
    }
};