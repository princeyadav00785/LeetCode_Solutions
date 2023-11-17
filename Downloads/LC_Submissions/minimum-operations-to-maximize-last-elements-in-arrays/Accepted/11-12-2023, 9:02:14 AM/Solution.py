// https://leetcode.com/problems/minimum-operations-to-maximize-last-elements-in-arrays

class Solution:
    def minOperations(self, nums1, nums2):
        ans1, ans2 = 0, 0

        n = len(nums1)

        # Check conditions for swapping in nums1
        for i in range(n - 1):
            if nums1[i] <= nums1[n - 1] and nums2[i] <= nums2[n - 1]:
                continue
            elif nums1[i] <= nums2[n - 1] and nums2[i] <= nums1[n - 1]:
                ans1 += 1
            else:
                ans1 = float('inf')
                break

        ans2 = 1
        nums1[n - 1], nums2[n - 1] = nums2[n - 1], nums1[n - 1]  # Swap last elements

        # Check conditions for swapping in nums2
        for i in range(n - 1):
            if nums1[i] <= nums1[n - 1] and nums2[i] <= nums2[n - 1]:
                continue
            elif nums1[i] <= nums2[n - 1] and nums2[i] <= nums1[n - 1]:
                ans2 += 1
            else:
                ans2 = float('inf')
                break

        ans = min(ans1, ans2)
        if ans == float('inf'):
            return -1
        return ans
