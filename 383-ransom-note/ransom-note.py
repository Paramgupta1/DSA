class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ran=list(ransomNote)
        mag=list(magazine)
        for x in mag:
            if x in ran:
                ran.remove(x)
        return len(ran) == 0