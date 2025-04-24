/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function(citations) {
    let h = 0;
    citations.sort((a, b) => b - a)
    let a;
    for (i = 0; i < citations.length; i++){
        a = 0;
        if (i + 1 >= citations[i]) a = citations[i];
        else{
            if (citations[i] > i + 1) a = i + 1;
        }
        h = Math.max(a, h)
    }
    return h;
};