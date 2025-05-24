var numIslands = function(grid) {
    function explore(set, i, j){
        if (set.has(i+','+j) || grid[i][j] === "0") return false;
        set.add(i+','+j);
        if (i - 1 >= 0) explore(set, i - 1, j);             
        if (i + 1 < grid.length) explore(set, i + 1, j);        
        if (j - 1 >= 0) explore(set, i, j - 1);             
        if (j + 1 < grid[0].length) explore(set, i, j + 1);        
        return true;
    }
    let total = 0, set = new Set();
    for (let i = 0; i < grid.length; i++){
        for (let j = 0; j < grid[0].length; j++){
            if (explore(set, i, j)) total += 1;   
        }
    }
    return total;
};