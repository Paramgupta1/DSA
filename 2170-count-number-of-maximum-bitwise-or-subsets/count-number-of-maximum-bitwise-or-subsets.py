class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        maxi = 0
        count = 0

        def solve(i, curr):
            nonlocal maxi, count

            if i == len(nums):
                if curr > maxi:
                    maxi = curr
                    count = 1
                elif curr == maxi:
                    count += 1
                return

            solve(i + 1, curr)
            solve(i + 1, curr | nums[i])

        solve(0, 0)
        return count