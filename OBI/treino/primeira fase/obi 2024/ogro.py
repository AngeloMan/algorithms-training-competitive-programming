def main():
    e, d = (int(input()) for i in range(2))
    if e > d:
      print(e + d)
    else:
      print(2 * (d - e))
if __name__ == "__main__":
    main()
