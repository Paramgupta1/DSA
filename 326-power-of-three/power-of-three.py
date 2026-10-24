class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        two=0
        while(n>=3**two):
            if(3**two==n):
                return True
            two+=1
        return False