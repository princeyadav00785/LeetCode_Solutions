// https://leetcode.com/problems/non-decreasing-array

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
    int cnt=0,mxm=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mxm){cnt++;}
            mxm= max(mxm,nums[i]);
        }
        
        if(cnt<=1)return true;
        else return false;
    }
};