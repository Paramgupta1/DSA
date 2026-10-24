class Solution:
    def numberOfMatches(self, n: int) -> int:
        match=0
        no=n
        while(no!=0):
            if no%2==0:
                no=no//2
                match=match+no
            elif no==1 :
                break
            else :
                no=no//2
                match=match+no+1

        return match