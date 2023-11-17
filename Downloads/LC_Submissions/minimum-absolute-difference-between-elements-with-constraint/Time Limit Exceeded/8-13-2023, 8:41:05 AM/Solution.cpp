// https://leetcode.com/problems/minimum-absolute-difference-between-elements-with-constraint

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
     int n = nums.size();
    int min_abs_diff = INT_MAX;

    for (int i = 0; i < n; ++i) {
        for (int j = i + x; j < n; ++j) {
            min_abs_diff = min(min_abs_diff, abs(nums[i] - nums[j]));
        }
    }

    return min_abs_diff;
    }
};