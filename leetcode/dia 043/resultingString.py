class Solution:
    def resultingString(self, s: str) -> str:
        from string import ascii_lowercase
        dp = {ascii_lowercase[i]:i for i in range(26)}
        result = [s[0]]
        for i in range(1, len(s)):
            if result and (abs(dp[s[i]] - dp[result[-1]]) == 1 or abs(dp[s[i]] - dp[result[-1]]) == 25):
                result.pop()
            else:
                result.append(s[i])
        return "".join(result)
                