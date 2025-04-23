class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        a1, b1 = [int(n) for n in num1.removesuffix('i').split('+')]
        a2, b2 = [int(n) for n in num2.removesuffix('i').split('+')]
        r = (a1 * a2) - (b1 * b2)
        i = (a1 * b2) + (a2 * b1)
        return str(r) + '+' + str(i) + 'i'