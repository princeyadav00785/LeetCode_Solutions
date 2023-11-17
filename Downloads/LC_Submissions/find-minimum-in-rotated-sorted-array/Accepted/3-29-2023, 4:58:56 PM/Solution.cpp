// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int mnm=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mnm){
                mnm =nums[i];
            }
        }
        return mnm;
    }
};