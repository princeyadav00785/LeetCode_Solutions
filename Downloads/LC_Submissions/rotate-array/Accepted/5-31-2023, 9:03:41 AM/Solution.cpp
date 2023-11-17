// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%(nums.size());
        vector<int>v(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            v[i]=nums[(nums.size()-k+i)%nums.size()];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
    }
};