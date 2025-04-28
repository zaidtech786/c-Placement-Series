const practise = (str) => {
    // Convert the string to an array of characters
    let arr = str.split('');
    
    for (let i = 0; i < arr.length; i++) {
        if (i == 0 || i == arr.length - 1) {
            arr[i] = arr[i].toUpperCase();
        } else if (arr[i] == " ") {
            // Check if i-1 and i+1 are valid indices before accessing them
            if (i - 1 >= 0) arr[i - 1] = arr[i - 1].toUpperCase();
            if (i + 1 < arr.length) arr[i + 1] = arr[i + 1].toUpperCase();
        }
    }
    
    // Convert the array back to a string and return it
    return arr.join('');
}

let str = "hello world";
// console.log(practise(str)); // Output: "HellO WorlD"


const plusOne = (arr,n) => {
    for(let i = n - 1 ; i>=0 ; i--){
        if(arr[i] != 9){
            arr[i]++;
            break;
        }
        arr[i] = 0;
    }

    if(arr[0] == 0){
        let res = Array(n + 1).fill(0);
        res[0] = 1;
        return res;
    }

    return arr;
}

let arr = [1,2,3];
console.log( plusOne(arr,3));