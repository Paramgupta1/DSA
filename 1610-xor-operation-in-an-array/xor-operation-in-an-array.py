class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        l=[]
        for i in range(n):
            l.append(start+(2*i))
        sum=l[0]
        for i in range(1,n):
            sum=(sum^l[i])
        return sum