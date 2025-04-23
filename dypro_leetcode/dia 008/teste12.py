# from time import time

# # list_ = [n for n in range(3, 11)]
# # print(min(list_ ))

# a = '323 2 2 2 2 2 4 434 434 44 3 3 2323 323 3 2323 3232 323 323 323123 123 4324 987 65578 5678 8756 8976 6789 678 876 876 876 876 5678 4567 56785 76865 78678 6578678 5678 5678 9876 2 12 1 1 323 432 8298 2 323 83 938 2938928 9382 3 2938 92389 38 938928 98 93829 898 98 938 989898 988 932 67 76 37 66 43 434543 5454545 56676 78787 8787878 9898 977 65 65454 5 768 7756 2801 78 12323 283 372837 8738238 1273827 3872138 712387 83728 23 32 1231321 3232 1322 323 2 23 2313 23 1323 338 8 388278 37287 38273 3782 38 7382738728 78 78372 878 7837280 787 387837'
# t1 = time()
# list_ = [int(n) for n in a.split()]
# t2 = time()
# print(t1 - t2)
# list_ = sorted(list_)
# print(t2 - time())
# print(len(list_))ñ

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
            if c == 0:
                tmp = candidates[0]
            for i in range(candidates.index(tmp), len(candidates)):
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
    
print(combinationSum([2,3,5], 8))