class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        count=len(nums)
        for i in nums:
            if i%3==0 :
                count=count-1
        return count