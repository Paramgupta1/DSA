class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        s = set(nums)
        l2 = []

        for i in range(1, len(nums)+1):
            if i not in s:
                l2.append(i)

        return l2