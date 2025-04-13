var computeArea = function(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2) {
    function area(x1, x2, y1, y2){
        let area = (x1 - x2) * (y1 - y2);
        if (area > 0) return area;
        return -area;
    }
    let a = area(ax1, ax2, ay1, ay2);
    let b = area(bx1, bx2, by1, by2);
    let final = a + b;
    let vx = 0;
    let vy = 0;
    if (ax1 <= bx1){
        if (ax2 >= bx2){
            vx = bx2 - bx1;
            if (vx < 0) vx = -vx;
        }
        if (ax2 < bx2){
            if (ax2 > bx1){
                vx = bx1 - ax2;
                if (vx < 0) vx = -vx;
            } 
        }
    }
    if (ax1 >= bx1){
        if (ax2 > bx2){
            if (ax1 < bx2){
                vx = ax1 - bx2;
                if (vx < 0) vx = -vx;
            }
        }
        if (ax2 <= bx2){
            vx = ax2 - ax1;
            if (vx < 0) vx = -vx;
        }
    }
    if (ay1 <= by1){
        if (ay2 >= by2){
            vy = by2 - by1;
            if (vy < 0) vy = -vy;
        }
        if (ay2 < by2){
            if (ay2 > by1){
                vy = by1 - ay2;
                if (vy < 0) vy = -vy;
            } 
        }
    }
    if (ay1 >= by1){
        if (ay2 > by2){
            if (ay1 < by2){
                vy = ay1 - by2;
                if (vy < 0) vy = -vy;
            }
        }
        if (ay2 <= by2){
            vy = ay2 - ay1;
            if (vy < 0) vy = -vy;
        }
    }
    return final - (vx * vy)

};