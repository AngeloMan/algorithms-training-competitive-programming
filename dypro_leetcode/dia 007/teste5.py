def wordBreak( s: str, wordDict: list[str]) -> bool:
    dp = {}
    def check(i, currentdict, currentword: str):
        if (i, currentword) in dp:
            return dp[(i, currentword)]
        if i == len(s):
            return 1
        dp[(i, currentword)] = 0
        for j in range(len(currentdict)):
            called = False
            if currentword.removeprefix(currentdict[j]) != currentword and currentdict[j][0] == s[i]:
                called = True
                dp[(i, currentword)] += check(i + len(currentdict[j]),currentdict , currentword.removeprefix(currentdict[j]))
                if dp[(i, currentword)]:
                    return 1
        if not called:
            return 0
        return dp[(i, currentword)]
    return True if check(0, wordDict, s) else False

print(wordBreak("cbca", ["bc","ca"]))
 