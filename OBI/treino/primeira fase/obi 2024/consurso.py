def main():
    n, k = map(int, input().split())
    
    arr = sorted(list(map(int, input().split())))
    
    print(arr[-k])

if __name__ == "__main__":
    main()
