def combinationSum3(k: int, n: int):
    target = k
    candidates = [i for i in range(1, n)]
    # sup = []
    dp = {}
    def checker(c= -1, t=0):
        if (c, t) in dp:
            return dp[(c, t)]
        if t == target:
            # sup.append(l)
            return [[candidates[c]]]
        dp[(c, t)] = []
        for i in range(c + 1, len(candidates)):
            if t + candidates[i] <= target - candidates[i] or t + candidates[i] == target:
                a = checker(i, t + candidates[i])
                for j in a:
                    if j:
                        returned = []
                        if c != -1 :
                            returned = [candidates[c]]
                        returned.extend(j)
                        if returned not in dp[(c, t)]:
                            dp[(c, t)].append(returned)
        return (dp[(c, t)])
    return checker()

print(combinationSum3(3, 7))
