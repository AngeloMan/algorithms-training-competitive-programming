class Solution:
    def intToRoman(self, num: int) -> str:
        dic = {1:'I',5:'V',10:'X',50:'L',100:'C',500:'D',1000:'M'}
        def conv(n):
            if n == 0:
                return ''
            p = 0
            while n >= 10:
                n = int(n/10)
                p += 1
            i = dic[1 * (10**p)]
            v = dic[5 * (10**p)]
            d = dic[1 * (10**(p + 1))]
            if n < 4:
                return i * n
            elif n == 4:
                return i + v
            elif 4 < n and n < 9:
                return v + (i * (n - 5))
            else: 
                return i + d 
        list_ = []
        for i in range(4):
            list_.append(int(num/10**(3 - i)))
            num -= list_[i] * 10**(3 - i)
        result = '' + dic[1000] * list_[0]
        for i in range(1, 4):
            result += conv(list_[i] * (10**(3 - i)))
        return result