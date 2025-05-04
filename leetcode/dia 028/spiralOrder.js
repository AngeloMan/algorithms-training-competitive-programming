var spiralOrder = function(matrix) {
    let arr = [], check = [], i = 0, j = 0, d = 0;
    while (arr.length < matrix.length * matrix[0].length){
        if (!check.includes(i.toString() + '-' + j.toString())){
            arr.push(matrix[i][j]);
            check.push(i.toString() + '-' + j.toString());
        }
        if (d === 0){
            if (check.includes(i.toString() + '-' + (j + 1).toString()) || j + 1 > matrix[0].length - 1) d = 1;
            else j++;
        }
        else if (d === 1){
            if (check.includes((i - 1).toString() + '-' + j.toString())|| i - 1 < 0) d = 2;
            else i--;
        }
        else if (d === 2){
             if (check.includes(i.toString() + '-' + (j - 1).toString())|| j - 1 < 0) d = 3;
            else j--;
        }
        else if (d === 3){
            if (check.includes((i + 1).toString() + '-' + j.toString()) || i + 1 > matrix.length - 1) d = 0;
            else i++;
        }
    }
    return arr;
};
