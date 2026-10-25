class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        ran = list(t)
        mag = list(s)

        for x in mag:
            if x in ran:
                ran.remove(x)
        return ran[0]