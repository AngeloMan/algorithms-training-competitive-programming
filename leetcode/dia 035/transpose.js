var transpose = function(matrix) {
    let newm = []
    for (i = 0; i < matrix[0].length; i++){
        newm.push([]);
        for(j = 0; j < matrix.length; j++){
            newm[i].push(matrix[j][i]);
        }
    }
    return newm;
};