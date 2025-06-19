def main():
    d, a, n = (int(input()) for i in range(3))
    print((32 - n) * (d + a * min(n - 1, 14)))

if __name__ == "__main__":
    main()
