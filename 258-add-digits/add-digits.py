class Solution:
    def addDigits(self, num: int) -> int:
        s=str(num)
        while(len(s)!=1):
            sum=0
            for i in s:
                sum=sum+int(i)
            s=str(sum)
        return int(s)



        