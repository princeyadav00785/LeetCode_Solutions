// https://leetcode.com/problems/maximum-strong-pair-xor-i

class Solution:
    def maximumStrongPairXor(self, nums):
        n = len(nums)
        ans = 0
        maxi = float('-inf')
        
        for i in range(n):
            for j in range(n):
                if abs(nums[i] - nums[j]) <= min(nums[i], nums[j]):
                    ans = nums[i] ^ nums[j]
                    maxi = max(maxi, ans)

        return maxi
