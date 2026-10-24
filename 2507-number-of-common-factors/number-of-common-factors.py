
class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        max_num = a if a < b else b
        count = 0

        for i in range(1, max_num + 1):
            if a % i == 0 and b % i == 0:
                count += 1

        return count
