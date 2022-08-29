#include<stdio.h>
#include<string.h>

char* reverse_string(char* param_1)

{
      char t;
   int i = 0;
   int j = strlen(param_1) - 1;

   while (i < j) {
      t = param_1[i];
      param_1[i] = param_1[j];
      param_1[j] = t;
      i++;
      j--;
   }
   return  param_1;
}