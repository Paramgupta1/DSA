class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        nums=0
        for i in digits:
            nums=(nums*10)+i
        nums=nums+1
        digit = [int(d) for d in str(nums)]
        return digit