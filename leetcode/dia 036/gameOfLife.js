var gameOfLife = function(board) {
    let change = [];
    let total;
    for (i = 0; i < board.length; i++){
        for (j = 0; j < board[0].length; j++){
            total = 0;
            for (u = i - 1; u <= i + 1; u ++){
                for(v = j - 1; v <= j + 1; v++){     
                    if (u >= 0 && v >= 0 && u < board.length && v < board[0].length && (u != i || v != j)) total += board[u][v];
                }
            }
            if ((board[i][j] === 1 &&(total < 2 || total > 3))||(board[i][j] === 0 && total === 3)) change.push([i, j].toString())
        }
    }
    let cord;
    for (i = 0; i < change.length; i++){
        cord = change[i].split(',');
        if (board[cord[0]][cord[1]] === 1) board[cord[0]][cord[1]] = 0;
        else board[cord[0]][cord[1]] = 1;
    }
};