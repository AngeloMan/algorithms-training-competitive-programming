def longestCommonPrefix(strs) -> str:
    pre = ''
    try:
        j = 0
        while True:
            l = strs[0][j]
            for i in strs:
                if i[j] == l and j != len(i):
                    ...
                else:                  
                    raise Exception
            pre += l
            j += 1
    except Exception:
        ...
    return pre

print(longestCommonPrefix(["flower","float","fly"]))