var numberToWords = function(num) {
    if (num === 0) return 'Zero';
    const n = num.toString();
    let nums = {
        '1' : 'One','2' : 'Two','3' : 'Three','4' : 'Four','5' : 'Five','6' : 'Six','7' : 'Seven','8' : 'Eight','9' : 'Nine','10' : 'Ten',
        '11' : 'Eleven','12' : 'Twelve','13' : 'Thirteen','14' : 'Fourteen','15' : 'Fifteen','16' : 'Sixteen','17' : 'Seventeen','18' : 'Eighteen','19' : 'Nineteen',
        '20' : 'Twenty','30' : 'Thirty','40' : 'Forty','50' : 'Fifty','60' : 'Sixty','70' : 'Seventy','80' : 'Eighty','90' : 'Ninety',
        '0':false,
    }
    let base = {1: 'Thousand', 2: 'Million', 3:'Billion'}
    function hundred(n){
        let result = [];
        if (n.length >= 3){
            if (nums[n[0]]) result.push(nums[n.toString()[0]],'Hundred', ...hundred(Number(n.toString().slice(1,3))));
            else result.push(...hundred(Number(n.toString().slice(1,3))))
        }
        else{
            if (n in nums){
                if (nums[n.toString()]) result.push(nums[n.toString()]);
                return result;
            }
            result.push(nums[n.toString()[0] + '0'], nums[n.toString()[1]]);
        }
        return result;
    }
    if (num < 1000) return hundred(n).join(' ');
    else {
        let result = [], check = false;
        const a = Math.floor(num/1000000000), b = Math.floor(num/1000000) - (a * 1000);
        const c = Math.floor(num/1000) - (a * 1000000)- (b * 1000), d = num - (a * 1000000000)- (b * 1000000) - (c * 1000);  
        const arr = [a, b, c, d], bases = ['Billion','Million','Thousand',''];
        for (i = 0; i < 4; i++){
            if ((arr[i] != 0)){
                let n = arr[i].toString();
                result.push(...hundred(n), bases[i]);
            }
        }
        if (result[result.length - 1] === '') result.pop();
        return result.join(' ');
    }
};