var minRemoveToMakeValid = function(s) {
    let stack = [], wrong = [], str = '';
    for (i = 0; i < s.length; i ++){
        if (s[i] === '(') stack.push(i);
        if (s[i] === ')'){
            if (stack.length != 0) stack.pop();
            else wrong.push(i);
        }
    }
    for (i = 0; i < s.length; i ++){
        if (!stack.includes(i) && !wrong.includes(i)) str += s[i];
    }
    return str;
};