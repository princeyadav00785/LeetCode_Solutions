// https://leetcode.com/problems/neither-minimum-nor-maximum

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3){return -1;
               }
        else return nums[1];
    }
};