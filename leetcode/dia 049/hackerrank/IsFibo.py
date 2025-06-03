import math
import os
import random
import re
import sys

s = set()
def isFibo(n, l, c):
    while c < n:
        s.add(c)
        a = c 
        c += l
        l = a
        if c >= n:
            return ["IsFibo", l, c] if c == n else ["IsNotFibo",l, c]
    return "IsFibo"
            
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())
    c, l = 1, 0
    for t_itr in range(t):
        n = int(input().strip())
        
        if c >= n:

            result = "IsNotFibo"
            if n in s or n == c:
                result = "IsFibo"
          
        else:        
            result, l, c = isFibo(n,l,c)
                          
        fptr.write(result + '\n')

    fptr.close()
