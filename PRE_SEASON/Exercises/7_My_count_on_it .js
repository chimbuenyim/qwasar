/*
    Description

    Count the size of each elements in an array.

    Create a function my_count_on_it, which receives a string array as parameter and returns an array with the length of each strings.

*/

function my_count_on_it(param_1) {
  let newArr = [];
  param_1.forEach((element) => newArr.push(element.length));
  return newArr;
}
