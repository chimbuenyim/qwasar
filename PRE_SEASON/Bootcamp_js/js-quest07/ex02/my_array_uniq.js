
function my_array_uniq(params) {
let uniqArr = [];
for(let index of params){
    if(!uniqArr.includes(index)){
uniqArr.push(index)
    }

}
return uniqArr;

}