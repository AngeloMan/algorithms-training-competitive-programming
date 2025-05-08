//funciona com 100% de precisão ate 17576
var convertToTitle = function(columnNumber) {
    const dict = {
        1: 'A', 2: 'B', 3: 'C', 4: 'D', 5: 'E', 6: 'F', 7: 'G', 8: 'H', 9: 'I',
        10: 'J', 11: 'K', 12: 'L', 13: 'M', 14: 'N', 15: 'O', 16: 'P', 17: 'Q', 18: 'R',
        19: 'S', 20: 'T', 21: 'U', 22: 'V', 23: 'W', 24: 'X', 25: 'Y', 26: 'Z'
    };
    function rec(n, bool){
        if (n < 1) n += 26;
        if (n <= 26) return dict[n];
        let c = 1, lastsum = 0;
        while (n > 26**(c + 1)){
            lastsum += 26**c;
            c++;     
        }
        let current = Math.floor(n/(26**c)), r = n % (26**c);
        if (n === 26**(c + 1)){
            let result = '';
            for (let i = 0; i < c; i++) result += 'Y';
            return result + 'Z';
        }
        if (r <= lastsum){
            current--;
            if (current < 1){
                current += 26;
                return dict[current] + rec(r, false);
            }
            if (bool) return dict[current] + rec(r + 26**c, true);
            return rec(r + 26**c, true)
        } 
        if (bool) return dict[current] + rec(r, true);
        return rec(r, true)
    }
    return rec(columnNumber, true);
};
