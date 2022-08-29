#include <stdio.h>
#include <string.h>


char* my_strstr(char* param_1, char* param_2)
{

 const char *a = param_1, *b = param_2;
  for (;;) {
    if ( !*b ) return (char *) param_1;
    if ( !*a ) return NULL;
    if ( *a++ != *b++) { a = ++param_1; b = param_2; }
  }

}

// char* my_strstr(const char *s1, const char *s2)
// {
//     size_t n = strlen(s2);
//     while(*s1)
//         if(!memcmp(s1++,s2,n))
//             return (char *) (s1-1);
//     return 0;
// }