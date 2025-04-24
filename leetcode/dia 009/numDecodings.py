# Decode Ways selution
from time import time

t1 = time()

def numDecodings(s: str) -> int:
    def mid(s):
        dp = {}
        if s[0] == "0":
            return 0

        def fib(n):
            a = 1;b = 1;c = 0
            for i in range(n - 1):
                c = a + b;b = a;a = c
            return a

        if s.count("1") == len(s):
            return fib(len(s))

        def check(index=0, l=1):
            if s[index] == "0" and l == 1:
                print("ok")
                return 0

            if index in dp:
                return dp[index, l]
            if index == len(s) - 1:
                return 1
            dp[index, l] = 0
            last = False
            if index + 2 < len(s):
                if s[index + 2] != "0":
                    last = True
            else:
                last = True
            if int(s[index] + s[index + 1]) <= 26 and l != 2 and index < len(s) - 1 and last:
                dp[index, l] += check(index + 1, 2)
            if s[index + 1] != "0":
                dp[index, l] += check(index + 1, 1)
            elif s[index + 1] == "0" and int(s[index]) > 2:
                return 0
            return dp[index, l]

        if len(s) >= 16:
            for i in range(int(len(s) / 2) - 5, len(s) - 1):
                if int(s[i] + s[i + 1]) > 26:
                    return mid(s[0 : i + 1]) * mid(s[i + 1 : len(s)])
        return check()

    return mid(s)

# str_ = '1' * 250
str_ = "9371597631128776948387197132267188677349924234674234434231413241234321423143124132431242433243245436564754353456567865643255477568545423534243232423432143124312412343131442178461549322423423423423423423432412412859125134924241649584251978418763151253"
print(len(str_))       
print(numDecodings(str_))
print(time()- t1)
