// https://leetcode.com/problems/non-decreasing-array

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
    int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])cnt++;
        }
        
        if(cnt<=1)return true;
        else return false;
    }
};