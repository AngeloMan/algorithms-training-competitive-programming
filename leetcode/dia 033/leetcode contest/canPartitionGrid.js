var canPartitionGrid = function(grid) {
    const m = grid.length, n = grid[0].length;
    let col = [], line = [], total = 0; 
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            total += grid[i][j];
            if (line[i]) line[i] += grid[i][j];
            else line[i] = grid[i][j];
            if (col[j]) col[j] += grid[i][j];
            else col[j] = grid[i][j];
        }
    }
    let copy = total, start = 0, a = [], b = [], c = [], d = [];
    for (i = 0; i < m; i++){
        start += line[i];
        copy  -= line[i];
        if (copy === start) return true;
        a.push(start - copy);
        b.push(copy - start);
    }
    copy = total, start = 0;
    for (i = 0; i < n; i++){
        start += col[i];
        copy  -= col[i];
        if (copy === start) return true;
        c.push(start - copy);
        d.push(copy - start);
    }
    console.log(a, b, c, d)
    return false;
    
};
console.log(canPartitionGrid[[4,5],[2,2],[1,2]])