class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        def checker(s):
            chars = {s[0]: 1}
            l, r, total = 0, 1, 0
            while (r < len(s)):
                try:
                    chars[s[r]] += 1
                except KeyError:
                    chars[s[r]] = 1 
                if s[r] != s[l]:
                    while sum(chars.values()) > chars[s[l]] + k:
                        chars[s[l]] -= 1
                        l += 1
                    
                total = max(total, r - l + 1)
                r += 1
            return total
        return max(checker(s), checker(s[::-1]))