class Solution:
    def buildArray(self, nums: list[int]) -> list[int]:
        num=[]
        for i in range(len(nums)):
            num.append(nums[nums[i]])
        print(num)
        return num