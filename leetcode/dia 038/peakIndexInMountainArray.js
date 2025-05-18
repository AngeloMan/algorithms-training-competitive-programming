var peakIndexInMountainArray = function(arr) {
    let l = 0, r = arr.length - 1, mid;
    while (true){
        mid = Math.floor((l + r)/2);
        if (arr[mid] < arr[mid + 1]) l = mid;
        else if (arr[mid] < arr[mid - 1]) r = mid;
        else return mid;
    }
};