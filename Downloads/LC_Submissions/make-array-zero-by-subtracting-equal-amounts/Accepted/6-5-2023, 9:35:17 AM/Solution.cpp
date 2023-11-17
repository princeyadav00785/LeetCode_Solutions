// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        return s.size()-s.count(0);
    }
};