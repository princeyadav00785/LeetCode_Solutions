// https://leetcode.com/problems/maximum-strong-pair-xor-ii

#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumStrongPairXor(std::vector<int>& nums) {
        // Sorting the array in ascending order
        std::sort(nums.begin(), nums.end());

        int n = nums.size();
        int result = 0;

        // Iterating through the array to find strong pairs and calculate XOR
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                // Checking the strong pair condition
                if (nums[j] - nums[i] <= nums[i]) {
                    result = std::max(result, nums[i] ^ nums[j]);
                } else {
                    // Break if the condition is not met to optimize the loop
                    break;
                }
            }
        }

        return result;
    }
};
