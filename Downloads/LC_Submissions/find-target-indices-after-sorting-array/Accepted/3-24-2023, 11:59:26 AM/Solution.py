// https://leetcode.com/problems/find-target-indices-after-sorting-array

class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
      
        res=[]
        nums.sort()
        index1=bisect.bisect_left(nums,target)
        index2=bisect.bisect_right(nums,target)
        return list(range(index1,index2))