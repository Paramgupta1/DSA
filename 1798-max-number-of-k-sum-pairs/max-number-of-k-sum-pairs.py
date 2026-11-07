from collections import defaultdict

class Solution:
    def maxOperations(self, nums: list[int], k: int) -> int:
        seen = defaultdict(int)
        op = 0
        
        for num in nums:
            complement = k - num
            if seen[complement] > 0:
                op += 1
                seen[complement] -= 1 
            else:
                seen[num] += 1        
                
        return op
