class Solution:
    def totalMoney(self, n: int) -> int:
        sum=0
        count=0
        i=1
        j=1
        while(n!=0):
            n-=1
            sum=sum+i
            i+=1
            count+=1
            if(count==7):
                i=j+1
                j+=1
                count=0
        return sum
        