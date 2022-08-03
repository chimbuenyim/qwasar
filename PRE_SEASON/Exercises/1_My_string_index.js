/*

 Description
 
 Create a my_string_index function which takes 2 parameters (haystack and needle) and locates the first occurrence of the character needle in the string haystack and returns the position.

You can this function as: is there a L (character) in my string "helLo".

Objective is to build a loop and having a if statement when it matches the right character and returns its position.

 */

function my_string_index(haystack, needle) {
  for (let index in haystack) {
    if (haystack[index] === needle) return index;
  }

  return -1;
}
