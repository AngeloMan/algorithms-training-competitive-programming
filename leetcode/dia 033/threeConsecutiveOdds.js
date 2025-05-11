var threeConsecutiveOdds = function(arr) {
    let odds = 0;
    for (i = 0; i < arr.length; i++){
        if (arr[i] % 2 === 1) odds++;
        else odds = 0;
        if (odds === 3) return true;
    }
    return false;
};