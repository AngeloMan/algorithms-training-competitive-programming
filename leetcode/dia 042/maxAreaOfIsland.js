var maxAreaOfIsland = function(grid) {
    function explore(grid, set, i, j){
        if (grid[i][j] === 0 || set.has(i + ',' + j)) return 0;
        set.add(i + ',' + j);
        area = 1;
        if (i > 0) area += explore(grid, set, i - 1, j);
        if (j > 0) area += explore(grid, set, i, j - 1);
        if (i + 1 < grid.length) area += explore(grid, set, i + 1, j);
        if (j + 1 < grid[0].length) area += explore(grid, set, i, j + 1);
        return area;
    }
    let max = 0, set = new Set();
    for (let i = 0; i < grid.length; i++){
        for (let j = 0; j < grid[0].length; j++){
            max = Math.max(max, explore(grid, set, i, j))
        }
    }
    return max;
};