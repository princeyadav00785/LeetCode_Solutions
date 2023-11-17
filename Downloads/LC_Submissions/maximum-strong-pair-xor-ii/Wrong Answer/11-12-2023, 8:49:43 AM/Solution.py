// https://leetcode.com/problems/maximum-strong-pair-xor-ii

class Solution:
    def maximumStrongPairXor(self, nums):
        nums.sort(reverse=True)
        result = 0

        for i in range(len(nums) - 1):
            result = max(result, nums[i] ^ nums[i + 1])

        return result
