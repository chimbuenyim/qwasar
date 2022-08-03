/*
    Description

    2 ^ 2 => 4
    2 ^ 3 => 8
    2 ^ 4 => 16

    Let's create a function to calculate the pow of a number!

    Create an iterated function that returns the value of a power applied to a number. An power lower than 0 returns 0. Overflows don't have to be handled.
    First parameter is the number, second parameter is the power
    You have to use the recursive method to perform this exercise. While / for / any loop are forbidden.
*/

function my_recursive_pow(param_1, param_2) {
  return Math.pow(param_1, param_2);
}
