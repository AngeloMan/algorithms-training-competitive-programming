var longestSubstringAtMostKRepeats = function(s, k) {
    let chars = {}, l = 0, r = 0;h = 0;
    while (r < s.length){
        if (s[r] in chars){
            chars[s[r]]++;
            while (chars[s[r]] > k){
                chars[s[l]]--;
                l++; 
            }
        }
        else{
            chars[s[r]] = 1;
        }
        h = Math.max(h, r - l + 1)
        console.log(chars, l, r);
        r ++;    
    }
    return h
};