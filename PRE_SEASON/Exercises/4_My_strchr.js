/*
    Description

    Searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str. The terminating null character is considered to be part of the string. Returns a pointer pointing to the last matching character, or null if no match was found.

*/

function my_strchr(words, param) {
  if (!words.includes(param)) return;

  return words.substring(words.indexOf(param), words.length);
}
