// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(auto x:nums){
            if(x==target)return true;
        }
        return false;
    }
};