class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        for j in range(len(words)): 
            words[j]=words[j][::-1]

        return " ".join(words)