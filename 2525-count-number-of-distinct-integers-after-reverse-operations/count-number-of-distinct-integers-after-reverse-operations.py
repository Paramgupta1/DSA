class Solution:
    def countDistinctIntegers(self, nums: list[int]) -> int:
        for i in range(len(nums)):
            st=str(nums[i])
            nums.append(int(st[::-1]))
        return len(set(nums))