n = 3
matrix = [([j + (i * 3) for j in range(1, n + 1)]) for i in range(n)]   
print(matrix)

new_matrix_final = [list(reversed([x[i] for x in matrix])) for i in range(len(matrix))]
print(new_matrix_final)