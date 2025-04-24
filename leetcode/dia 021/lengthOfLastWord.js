/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) { 
    let r = s.length - 1;
    while ((s[r] === ' ')&&(r != -1)){
        r--
    }
    if (r === -1) return 0;
    let l = r;
    while ((s[l] != ' ')&&(l != -1)){
        l--
    }
     
    return r - l;
};