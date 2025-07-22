class Solution:
    
    def validateCoupons(self, code: List[str], businessLine: List[str], isActive: List[bool]) -> List[str]:
        def check(cup, chrs):
            if not cup:
                return False
            for c in cup:
                if not c in chrs :
                    return False
            return True
        chrs = set([chr(i + 65) for i in range(26)] + ["_"] + [chr(i + 97) for i in range(26)] + [str(i) for i in range(10)])
        cts = {"electronics", "grocery", "pharmacy", "restaurant"}
        result = []
        for i in range(len(code)):
            if check(code[i], chrs) and businessLine[i] in cts and isActive[i]:
                result.append((businessLine[i],code[i]))
        result.sort()
        return [result[i][1] for i in range(len(result))]