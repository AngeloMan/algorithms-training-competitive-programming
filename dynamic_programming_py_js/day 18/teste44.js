var trap = function(height) {
    
    function tw(arr){
        let total = 0;
        let stack = [];
        for (i = 0; i < arr.length; i++){    
            if (stack[0] === undefined) stack.push(arr[i]);    
            else{
                if (stack[0] <= arr[i]){
                    for (j = 1; j < stack.length; j++){  
                        total += stack[0] - stack[j];
                    }
                    stack = [arr[i]];
                }    
                else stack.push(arr[i]);
            }
        }
        stack.reverse();
        if (stack.length > 2) total += tw(stack);
        return total;
    }
    return tw(height)
};
