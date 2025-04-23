if __name__ == "__main__":
    def combinationSum(candidates: list[int], target: int) -> list[list[int]]:
        if target < min(candidates):
            return []
        candidates = sorted(candidates)
        # sup = []
        dp = {}
        def checker(c=0, t=0):
            print(c)
            if (c, t) in dp:
                return dp[(c, t)]
            if t == target:
                # sup.append(l)
                print([[c]])
                return [[c]]
            dp[(c, t)] = []
            tmp = c
            u = 1
            if c == 0:
                tmp = candidates[0]
                u = 0
            for i in range(candidates.index(tmp) + u, len(candidates)):
                if t + candidates[i] <= target - candidates[i] or t + candidates[i] == target:
                    a = checker(candidates[i], t + candidates[i])
                    print(a)
                    for j in a:
                        if j:
                            returned = []
                            if c != 0:
                                returned = [c]
                            returned.extend(j)
                            print('r', returned)
                            dp[(c, t)].append(returned)
            return dp[(c, t)]
        return checker()
print(combinationSum([10,1,2,7,6,1,5], 8))