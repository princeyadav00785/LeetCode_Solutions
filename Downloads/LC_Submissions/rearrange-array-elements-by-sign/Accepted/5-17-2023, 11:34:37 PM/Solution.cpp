// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[a]=nums[i];
                a=a+2;
            }
        }
        a=1;
        for(int i=0;i<nums.size();i++){
              if(nums[i]<0){
                ans[a]=nums[i];
                a=a+2;
            }
        }
        return ans;
    }
};