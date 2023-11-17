// https://leetcode.com/problems/third-maximum-number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int mnm=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mnm){
                mnm=nums[i];
            }
        }
        int tmnm=INT_MIN;
           for(int i=0;i<nums.size();i++){
            if(nums[i]>tmnm&&nums[i]!=mnm){
                tmnm=nums[i];
            }
        }
                int hmnm=INT_MIN;
           for(int i=0;i<nums.size();i++){
            if(nums[i]>hmnm&&nums[i]!=tmnm&&nums[i]!=mnm){
                hmnm=nums[i];
            }
        }
        if(hmnm==INT_MIN){return mnm;}else return hmnm;
    }
};