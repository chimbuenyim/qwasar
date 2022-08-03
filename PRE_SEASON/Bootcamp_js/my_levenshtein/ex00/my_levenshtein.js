
function my_levenshtein(param1,param2) {
    if(param1.length !== param2.length) return -1

    count = 0;

    for (let index = 0; index < param1.length; index++) {
        
        if(param1[index] !== param2[index]) count += 1
    }

    return count
}