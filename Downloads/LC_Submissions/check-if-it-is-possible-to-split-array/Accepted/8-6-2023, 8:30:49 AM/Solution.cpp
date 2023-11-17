// https://leetcode.com/problems/check-if-it-is-possible-to-split-array

class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size()==1||nums.size()==2){
          return true;
         
        }
        int f=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+nums[i+1]>=m){
                f=1;
            }
        }
        if(f==0)return false;
        return true;
    }
};