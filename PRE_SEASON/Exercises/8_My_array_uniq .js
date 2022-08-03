/*
    Description

    Create an array without any duplicates.

    Create a function my_array_uniq, which receives an integer array as a parameter and returns an array with those integers but without any duplicates.
*/

function my_array_uniq(param_1) {
  let newArr = [];

  param_1.forEach((element) => {
    if (!newArr.includes(element)) {
      newArr.push(element);
    }
  });

  return newArr;
}
