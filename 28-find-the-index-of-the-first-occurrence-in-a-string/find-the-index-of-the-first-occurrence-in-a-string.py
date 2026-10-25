class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        for i in range(len(haystack)):
            bang = True

            for k in range(len(needle)):
                if i + k >= len(haystack):
                    bang = False
                    break

                if haystack[i + k] != needle[k]:
                    bang = False
                    break

            if bang:
                return i

        return -1