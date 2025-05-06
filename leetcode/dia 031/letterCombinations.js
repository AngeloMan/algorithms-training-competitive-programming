var letterCombinations = function(digits) {
    if (!digits) return [];
    //import string
    //dict = { f"{i + 2}":string.ascii_lowercase[i * 3: 3 + (i * 3)] for i in range(9)}
    const dict = {'2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl', '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'};
    let result = [];
    function rec(index, word){
        if (index === digits.length){
            result.push(word);
            return;
        }
        for(let i = 0; i < dict[digits[index]].length; i++){
            rec(index + 1, word + dict[digits[index]][i]);
        }
    }
    rec(0, '');
    return result;
};
