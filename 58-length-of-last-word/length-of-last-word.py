
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        g = len(s) - 1
        count = 0

        while g >= 0 and s[g] == ' ':
            g -= 1

        while g >= 0 and s[g] != ' ':
            count += 1
            g -= 1

        return count
