class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        st=""
        if len(word1)>len(word2):
            r=len(word2)
        else:
            r=len(word1)
        for i in range(r):
            st=st+word1[i]+word2[i]

            
        if len(word1)>len(word2):
            st=st+word1[len(word2):]
        else:
            st=st+word2[len(word1):]

        return st