#include <stdio.h>

void my_print_reverse_alphabet () {
   char ch;

   for(ch = 'z' ; ch >= 'a' ; ch--) {
    putchar(ch);      
   }

    putchar('\n');
   
}

