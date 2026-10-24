class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        two=0
        while(n>=4**two):
            if(4**two==n):
                return True
            two+=1
        return False
