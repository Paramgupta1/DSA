class Solution:
    def reverseVowels(self, s: str) -> str:
        l = list(s)
        v = ["A", "E", "I", "O", "U", "a", "e", "i", "o", "u"]

        i = 0
        j = len(l) - 1

        while i < j:
            if l[i] not in v:
                i += 1
            elif l[j] not in v:
                j -= 1
            else:
                l[i], l[j] = l[j], l[i]
                i += 1
                j -= 1

        return "".join(l)