class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        si=[]
        for i in range(len(s)):
            si.append(s[-1-i])
        s[:]=si