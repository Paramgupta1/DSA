class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = "aeiou"

        count = sum(1 for ch in s[:k] if ch in vowels)
        ans = count

        for i in range(k, len(s)):
            if s[i] in vowels:
                count += 1

            if s[i-k] in vowels:
                count -= 1

            ans = max(ans, count)

        return ans