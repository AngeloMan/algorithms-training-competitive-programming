def longestPalindrome(s: str) -> str:
    def check_longest(longest = ''):
        for i in range(len(s)):
            check = True
            min_ = 0
            max_ = 0
            while check:
                if s[i + min_] == s[i + max_]:
                    if len(s[i + min_:i + max_ + 1]) > len(longest) and len(s[i + min_:i + max_ + 1]) != len(s):
                        longest = s[i + min_:i + max_ + 1]
                    if i + min_ - 1 >= 0 and i + max_ + 1 < len(s):
                        min_ -= 1
                        max_ += 1
                    else:
                        check = False
                else:
                    check = False
        for i in range(len(s) - 1):
            check = True
            min_ = 0
            max_ = 0
            while check:
                if s[i + min_] == s[i + max_ + 1]:
                    if len(s[i + min_:i + max_ + 2]) > len(longest) and len(s[i + min_:i + max_ + 2]) != len(s):
                        longest = s[i + min_:i + max_ + 2]
                    if i + min_ - 1 >= 0 and i + max_ + 2 < len(s):
                        min_ -= 1
                        max_ += 1
                    else:
                        check = False
                else:
                    check = False

        return longest
    return check_longest()

print(longestPalindrome("bbb"))