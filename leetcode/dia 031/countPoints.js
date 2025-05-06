var countPoints = function(points, queries) {
    function check(point, circle){
        return ((point[0] - circle[0])**2) + ((point[1] - circle[1])**2) <= circle[2]**2
    }
    let result = [], c ;
    for (i = 0; i < queries.length; i++){
        c = 0;
        for (j = 0; j < points.length; j++){
            if (check(points[j], queries[i])) c++;
        }
        result.push(c);
    }
    return result;
};
