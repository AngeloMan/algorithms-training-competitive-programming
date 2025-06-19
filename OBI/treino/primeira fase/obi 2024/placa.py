def main():
    from string import ascii_uppercase, digits

    p = input()
    
    
    t = -1
    if len(p) == 8:
        for i in range(3):
            if not p[i] in ascii_uppercase:
                t = 0
        if p[3] != "-":
            t = 0
        for i in range(4):
            if not p[i + 4] in digits:
                t = 0
        if t == -1:
            t = 1
    elif len(p) == 7:
        for i in range(3):
            if not p[i] in ascii_uppercase:
                t = 0
        if not p[4] in ascii_uppercase and not p[3] in digits:
            t = 0
        for i in range(2):
            if not p[i + 5] in digits:
                t = 0
        if t == -1:
            t = 2
    else:
        t = 0
        
    print(t)


if __name__ == "__main__":
    main()