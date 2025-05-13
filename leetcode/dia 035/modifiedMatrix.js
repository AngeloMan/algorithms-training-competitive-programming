var modifiedMatrix = function(matrix) {
    let col = [], a = [];
    col.length = matrix[0].length;
    for (i = 0; i < matrix.length; i++){
        for (j = 0; j < matrix[0].length; j ++){
            if (col[j] === undefined || col[j] < matrix[i][j]) col[j] = matrix[i][j];
            if (matrix[i][j] === -1) a.push([i, j])
        }
    }
    for (i = 0; i < a.length; i ++){
        matrix[a[i][0]][a[i][1]] = col[a[i][1]];
    }
    return matrix;
};