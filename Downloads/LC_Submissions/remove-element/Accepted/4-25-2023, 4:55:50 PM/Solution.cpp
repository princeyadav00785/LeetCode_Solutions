// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){cnt++;}
        }
            // return cnt;
        int l=0,h=0;
        for(int i=0;i<nums.size();i++){
            if(nums[h]==val){h++;}else{
                nums[l]=nums[h];
                l++;h++;
            }
        }
        return cnt;
    }
};