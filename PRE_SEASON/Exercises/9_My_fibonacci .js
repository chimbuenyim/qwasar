/*
    Description

    Create a function my_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index. We'll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.

    If the value is less than 0, the function should return -1.

    It should be prototyped:

    Recursive will be helpful here.

    Google fibanacci.
*/

function my_fibonacci(param_1) {
  if (param_1 < 0) return -1;

  if (param_1 <= 1) return param_1;

  return my_fibonacci(param_1 - 1) + my_fibonacci(param_1 - 2);
}
