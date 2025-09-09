def notok(a, b, s):
    nw = a + b
    for i in range(10):
        if s == nw[i:i+10]:
            return True
    nw = b + a
    for i in range(10):
        if s == nw[i:i+10]:
            return True
    return False

def main():
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(input())
        for a in range(i):
            if i == 1 and arr[0] == arr[1]:
              print(arr[i])
              return
            for b in range(a):
                if notok(arr[a], arr[b], arr[i]):
                    print(arr[i])
                    return
    print("ok")

main()