var subsets = function(nums) {
    let result = [[]], dict = {};
    if (!nums || !nums[0] && nums[0] != 0) return result;
    function rec(index){
        if (index === nums.length - 1){
            dict[index] = [[nums[index]]];
            return;
        }
        rec(index + 1);
        dict[index] = [[nums[index]]];
        for (let i = index + 1; i < nums.length; i++){
            for(let j = 0; j < dict[i].length; j++) dict[index].push([nums[index], ...dict[i][j]]);
        }
    }
    rec(0);
    for (let i = 0; i < nums.length; i ++) result.push(...dict[i])
    return result;
};