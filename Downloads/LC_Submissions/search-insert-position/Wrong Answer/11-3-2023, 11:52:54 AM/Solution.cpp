// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int  ans=nums.size();
        for(int i=nums.size()-1;i>0;i--)if(nums[i]>=target){ans=i;}
        return ans;
    }
};