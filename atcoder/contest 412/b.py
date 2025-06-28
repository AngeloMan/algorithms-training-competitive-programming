def check(s, st, up):
    for i in range(1, len(s)):
        if s[i] in up and not s[i - 1] in st:
            print("No")
            return 
    
    print("Yes")
  
s, t = (input() for i in range(2))

up = set([chr(65 + i) for i in range(26)])
st = set([c for c in t])

check(s, st, up)