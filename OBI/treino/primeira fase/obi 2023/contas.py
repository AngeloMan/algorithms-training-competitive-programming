def main():
    v = int(input())
    c = []
    for i in range(3):
      c.append(int(input()))
      
    c.sort
    
    t = 0
    for i in c:
        if v - i >= 0:
            v -= i
            t += 1
    
    print(t)

if __name__ == "__main__":
    main()
