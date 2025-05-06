var exist = function(board, word) {
    let real = false
    function rec(i, j, index, vst){
        if (index === word.length - 1){
            real = true
            return;
        }
        for (let m = i - 1; m < i + 2; m++){
            for (let n = j - 1; n < j + 2; n++){
                if ((m === i || n === j)&&(m != i || n != j)&& m >= 0 && n >=0 && m < board.length && n < board[0].length){
                    if ((!vst.includes(m.toString()+'-'+n.toString()))&&(board[m][n] === word[index + 1])){
                        rec(m, n, index + 1, [m.toString()+'-'+n.toString(), ...vst]);
                    }
                }
            }
        }
    }
    for (let i = 0; i < board.length; i++){
        for (let j = 0; j < board[0].length; j++){
            if (board[i][j] === word[0]){
                rec(i, j, 0, [i.toString()+'-'+j.toString()]);
            }
        }
    }
    return real;
};
