def main():
    q, w = map(int, input().split())
    
    a = [int(n) for n in input().split()]
    b = [int(n) for n in input().split()]
    
    i, j = 0, 0
    
    while i < q and j < w:
        if a[i] == b[j]:
            j += 1
        i += 1
    
    if j == w:
        print("S")
    else:
        print("N")

if __name__ == "__main__":
    main()
