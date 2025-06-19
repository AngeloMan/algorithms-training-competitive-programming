a, b, c = (int(input()) for i in range(3))

print(min(abs(a - b) + abs(b - c) + abs(a - c), abs(a - c) + abs(c - b) + abs(b - a)))