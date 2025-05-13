var setZeroes = function(matrix) {
    let col = new Set(), lines = [];
    for (i = 0; i < matrix.length; i++){
        for (j = 0; j < matrix[0].length; j ++){
            if (matrix[i][j] === 0){
                col.add(j);
                lines.push(i);
            }
        }
    }
    for (i = 0; i < lines.length; i++){
        for(j = 0; j < matrix[0].length; j++){
            if (matrix[lines[i]][j] != 0) matrix[lines[i]][j] = 0;
        }
    }
    col = [...col]
    for (i = 0; i < matrix.length; i++){
        for(j = 0; j < col.length; j++){
            if (matrix[i][col[j]] != 0) matrix[i][col[j]] = 0;
        }
    }
    return matrix;
};