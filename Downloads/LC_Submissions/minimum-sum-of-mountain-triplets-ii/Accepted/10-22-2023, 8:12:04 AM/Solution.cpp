// https://leetcode.com/problems/minimum-sum-of-mountain-triplets-ii

#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
    int minimumSum(std::vector<int>& nums) {
        int n = nums.size();
        
        if (n < 3) {
            return -1; // Not enough elements for a mountain triplet
        }
        
        std::vector<int> left_min(n, 0);
        std::vector<int> right_min(n, 0);

        left_min[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left_min[i] = std::min(left_min[i - 1], nums[i]);
        }

        right_min[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right_min[i] = std::min(right_min[i + 1], nums[i]);
        }

        int min_sum = INT_MAX;
        for (int j = 1; j < n - 1; j++) {
            if (nums[j] > left_min[j] && nums[j] > right_min[j]) {
                min_sum = std::min(min_sum, nums[j] + left_min[j] + right_min[j]);
            }
        }

        return (min_sum != INT_MAX) ? min_sum : -1;
    }
};


