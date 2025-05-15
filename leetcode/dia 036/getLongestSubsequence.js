var getLongestSubsequence = function(words, groups) {
    let arr = [words[0]];
    for (i = 1; i < words.length; i++){
        if (groups[i] != groups[i- 1]) arr.push(words[i]);
    }
    return arr;
};
