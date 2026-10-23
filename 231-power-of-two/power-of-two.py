class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        two=0
        while(n>=2**two):
            if(2**two==n):
                return True
            two+=1
        return False
