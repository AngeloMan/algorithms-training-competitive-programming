var findDiagonalOrder = function(mat) {
    let i = 0, j = 0, arr = [], p = 1;
    const m = mat.length , n = mat[0].length;
    while (arr.length < m * n){
        arr.push(mat[i][j]);
        if (i - p < 0 || i - p > m - 1 || j + p < 0 || j + p > n - 1){
            if (p > 0){
                if (j + 1 < n) j++;
                else i++;
            }
            if (p < 0){
                if (i + 1 < m) i++;
                else j++;
            }
            p = -p;
        }
        else i -= p, j +=p;
    }
    return arr;
};
