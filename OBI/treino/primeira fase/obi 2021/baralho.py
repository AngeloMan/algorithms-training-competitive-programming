def main():
    a = input()
    p = {"C":[0,13], "E":[1,13], "U":[2,13], "P":[3,13]}
    arr = [0 for i in range(52)]
    for i in range(0, len(a), 3):
        x = int(a[i:i + 2]) +  p[a[i + 2]][0] * 13
        if p[a[i + 2]][1] != "erro":
            arr[x - 1] += 1
            if arr[x - 1] > 1:
                p[a[i + 2]][1] = "erro"
            else:
                p[a[i + 2]][1] -= 1
            
    for i in p:
        print(p[i][1])

main()