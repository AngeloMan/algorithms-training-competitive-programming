n = 5;triangle = []
for i in range(5):
    layer = []
    for j in range(i + 1):
        try:
            if i - 1 >= 0 and j - 1 >= 0:
                layer.append(triangle[i - 1][j - 1] + triangle[i - 1][j])
            else:
                raise Exception
        except Exception:
            layer.append(1)
    triangle.append(layer)

print(triangle)