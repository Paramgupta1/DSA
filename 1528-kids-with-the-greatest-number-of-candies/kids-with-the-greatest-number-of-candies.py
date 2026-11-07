class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        ma = 0
        op=[]
        for i in candies:
            if ma<=i :
                ma=i
        for i in candies:
            if i+extraCandies>=ma:
                op.append(True)
            else:
                op.append(False)
        return op