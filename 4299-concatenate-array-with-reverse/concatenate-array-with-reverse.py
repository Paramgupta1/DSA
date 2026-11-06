class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        op=nums
        for i in range(len(nums)-1,-1,-1):
            op.append(nums[i])
        return op